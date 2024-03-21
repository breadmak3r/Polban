import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Main main = new Main();
        Scanner scan = new Scanner(System.in);

        Penjualan penjualan = new Penjualan();

        Produk nasiGoreng = new Produk("Nasi Goreng", 12000, 20);
        penjualan.addOrder(nasiGoreng);

        Produk tahuGejrot = new Produk("Tahu Gejrot", 10000, 20);
        penjualan.addOrder(tahuGejrot);

        Produk lontongKari = new Produk("Lontong Kari", 11000, 0);
        penjualan.addOrder(lontongKari);

        Produk mieAyam = new Produk("Mie Ayam", 9000, 30);
        penjualan.addOrder(mieAyam);

        Produk mieBaso = new Produk("Mie Baso", 13000, 40);
        penjualan.addOrder(mieBaso);

        Produk rotiBakar = new Produk("Roti Bakar", 5000, 87);
        penjualan.addOrder(rotiBakar);

        Produk ayamGeprek = new Produk("Ayam Geprek", 12000, 35);
        penjualan.addOrder(ayamGeprek);

        Produk nasiUduk = new Produk("Nasi Uduk", 7000, 11);
        penjualan.addOrder(nasiUduk);

        Produk nasiKuning = new Produk("Nasi Kuning", 8000, 8);
        penjualan.addOrder(nasiKuning);

        Produk nasiPadang = new Produk("Nasi Padang", 14000, 19);
        penjualan.addOrder(nasiPadang);

        penjualan.showOrder();

        System.out.println("\nMasukkan nama makanan yang ingin dipesan:");
        String namaMakanan = scan.nextLine();

        System.out.println("\nMasukkan jumlah makanan yang ingin dipesan:");
        int jumlahOrder = scan.nextInt();

        penjualan.order(namaMakanan, jumlahOrder);

        penjualan.reorder(scan);
            
        scan.close();
    }
}   