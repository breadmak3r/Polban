public class Makanan {
    private String nama;
    private int harga;
    private int stok;

    public Makanan(String nama, int harga, int stok){
        this.nama = nama;
        this.harga = harga;
        this.stok = stok;
    }
    
    public String getNama(){
        return nama;
    }

    public int getHarga(){
        return harga;
    }

    public int getStok(){
        return stok;
    }

    public void setStok(int stok){
        this.stok = stok;
    }

    public void kurangiStok(int jumlahMenu){
        if (stok >= jumlahMenu) {
            stok -= jumlahMenu;
            System.out.println("Pesanan anda telah diproses.");
        } else{
            System.out.println("Maaf, stok tidak mencukupi pesanan ini.");
        }
    }
}
