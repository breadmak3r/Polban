public class Restaurant {
    private Makanan[] menu;
    private int jumlahMenu;
    private static final int MAX_MENU = 10;

    // Constructor
    public Restaurant(){
        menu = new Makanan[MAX_MENU];
        jumlahMenu = 0;
    }

    // Method Menambah Makanan
    public void tambahMenuMakanan(Makanan makanan){
        if (jumlahMenu < MAX_MENU) {  
            menu[jumlahMenu] = makanan;
            jumlahMenu++;
        } else{
            System.out.println("Tidak bisa menambahkan menu baru dikarenakan menu sudah penuh!");
        }
    }

    public void tampilMenuMakanan(){
        for(int i = 0; i < jumlahMenu; i++){
            System.out.println(menu[i].getNama()+ "     [" + menu[i].getStok() + "]" + "\tRp." + menu[i].getHarga());
            }
        }
    
    public void order(String namaMakanan, int jumlahOrder){
        for(int i = 1; i < jumlahMenu; i++){
            if(menu[i].getNama().equalsIgnoreCase(namaMakanan)){
                if (menu[i].getStok() >= jumlahOrder) {
                    System.out.println("Pesanan berhasil! Terima kasih telah memesan " + jumlahOrder + " " + namaMakanan + ".");
                    menu[i].kurangiStok(jumlahOrder);
                } else{
                    System.out.println("Maaf, Pesanan gagal. Pesanan yang dipilih melebihi stok yang tersedia." );
                }
                return;
            }
        }
        System.out.println("Maaf, " + namaMakanan + " tidak tersedia di menu!");
    }
}