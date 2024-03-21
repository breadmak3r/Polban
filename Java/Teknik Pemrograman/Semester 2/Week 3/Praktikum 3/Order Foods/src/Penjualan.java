import java.util.Scanner;

public class Penjualan {
    private Produk[] menu;
    private int totalMenu;
    private int totalHarga = 0;
    private static final int MAX_MENU = 20;

    // Constructor
    public Penjualan(){
        menu = new Produk[MAX_MENU];
        totalMenu = 0;
    }

    // Method Menambah Makanan
    public void addOrder(Produk produk){
        if (totalMenu < MAX_MENU) {  
            menu[totalMenu] = produk;
            totalMenu++;
        } else{
            System.out.println("Tidak bisa menambahkan menu baru dikarenakan menu sudah penuh!");
        }
    }

    public void showOrder(){
        int totalHarga = 0;
        for(int i = 0; i < totalMenu; i++){
            System.out.println(menu[i].getNamaProduk()+ "     [" + menu[i].getQty() + "]" + "\tRp." + menu[i].getHarga());
        }
    }
    
    public void order(String namaProduk, int totalOrder){
        for(int i = 1; i < totalMenu; i++){
            if(menu[i].getNamaProduk().equalsIgnoreCase(namaProduk)){
                if (menu[i].getQty() >= totalOrder) {
                    System.out.println("\nPesanan berhasil! Terima kasih telah memesan " + totalOrder + " " + namaProduk + ".");
                    menu[i].kurangiStok(totalOrder);
                    totalHarga += totalOrder * menu[i].getHarga();
                    System.out.println("\nMenu yang Dipesan: " + totalOrder + " " + menu[i].getNamaProduk());
                    System.out.println("==================");
                    System.out.println("==================");
                    System.out.println("Total Harga: Rp." + totalHarga);
                } else{
                    System.out.println("Maaf, Pesanan gagal. Pesanan yang dipilih melebihi stok yang tersedia." );
                }
                return;
            }
        }
        System.out.println("Maaf, " + namaProduk + " tidak tersedia di menu!");
    }

    public boolean reorder(Scanner scan){
        System.out.println("\n\nApakah anda ingin memesan kembali?");
        System.out.println("1. Ya");
        System.out.println("2. Tidak");

        int jawaban = scan.nextInt();
        scan.nextLine();
        
        if (jawaban == 1) {
            showOrder();
            System.out.println("\nMasukkan nama makanan yang ingin dipesan:");
            String namaMakanan = scan.nextLine();

            System.out.println("Masukkan jumlah makanan yang ingin dipesan:");
            int jumlahOrder = scan.nextInt();

            // Panggil method order untuk melakukan pemesanan
            order(namaMakanan, jumlahOrder);
            return true;
        } else if (jawaban == 2) {
            System.out.println("\nTerima kasih telah melakukan pemesanan!");
            return false;
        } else {
            System.out.println("Input tidak valid! Mohon masukkan angka 1 atau 2");
            return reorder(scan);
        }
    }
}