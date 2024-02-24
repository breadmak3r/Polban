public class Produk {
    private String nama_produk;
    private int harga;
    private int qty;

    public Produk(String nama_produk, int harga, int qty){
        this.nama_produk = nama_produk;
        this.harga = harga;
        this.qty = qty;
    }
    
    public String getNamaProduk(){
        return nama_produk;
    }

    public int getHarga(){
        return harga;
    }

    public int getQty(){
        return qty;
    }

    public void setQty(int qty){
        this.qty = qty;
    }

    public void kurangiStok(int totalMenu){
        if (qty >= totalMenu) {
            qty -= totalMenu;
            System.out.println("Pesanan anda telah diproses.");
        } else{
            System.out.println("Maaf, stok tidak mencukupi pesanan ini.");
        }
    }
}
