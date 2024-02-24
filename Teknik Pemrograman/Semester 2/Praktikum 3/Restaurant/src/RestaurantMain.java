import java.util.Scanner;

public class RestaurantMain {

    public static void main(String[] args) {
        Restaurant restaurant = new Restaurant();
        Scanner scan = new Scanner(System.in);

        Makanan balaBala = new Makanan("Bala-bala", 1000, 20);
        restaurant.tambahMenuMakanan(balaBala);

        Makanan gehu = new Makanan("Gehu", 1000, 20);
        restaurant.tambahMenuMakanan(gehu);

        Makanan tahu = new Makanan("Tahu", 1000, 0);
        restaurant.tambahMenuMakanan(tahu);

        Makanan molen = new Makanan("Molen", 1000, 10);
        restaurant.tambahMenuMakanan(molen);

        restaurant.tampilMenuMakanan();

        System.out.println("\nMasukkan nama makanan yang ingin dipesan:");
        String namaMakanan = scan.nextLine();

        System.out.println("Masukkan jumlah makanan yang ingin dipesan:");
        int jumlahOrder = scan.nextInt();

        restaurant.order(namaMakanan, jumlahOrder);

        scan.close();

        System.out.println("\nMenampilkan menu kembali:");
        restaurant.tampilMenuMakanan();
    }
}