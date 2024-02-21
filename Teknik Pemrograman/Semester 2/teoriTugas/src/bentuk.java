/*
    Nama    : Alnez Rainansantana
    NIM     : 231524001
    Kelas   : 1A-D4
    Tanggal : Rabu, 21 Februari 2024

    Politeknik Negeri Bandung
 */

import java.util.Scanner;

public class bentuk {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("RUMUS-RUMUS LUAS BANGUN DATAR");
        System.out.println("Pilih bangun datar yang diinginkan!");
        System.out.println("1. Persegi");
        System.out.println("2. Segitiga");
        System.out.println("3. Lingkaran");
        System.out.println("4. persegiPanjang");
        
        persegi oPersegi = new persegi();
        segitiga oSegitiga = new segitiga();
        lingkaran oLingkaran = new lingkaran();
        persegiPanjang oPersegiPanjang = new persegiPanjang();
        
        int selectionBangunDatar = input.nextInt();
        if (selectionBangunDatar == 1) {
            oPersegi.rumusLuas();
            System.out.println("Masukkan panjang sisi: ");
            double sisi = input.nextDouble();
            oPersegi.nilaiSisi(sisi);
            oPersegi.luasPersegi();
        } else if (selectionBangunDatar == 2) {
            oSegitiga.rumusLuas();
            System.out.println("Masukkan panjang alas: ");
            double alas = input.nextDouble();
            oSegitiga.nilaiAlas(alas);
            System.out.println("Masukkan panjang tinggi: ");
            double tinggi = input.nextDouble();
            oSegitiga.nilaiTinggi(tinggi);
            oSegitiga.luasSegitiga();
        } else if (selectionBangunDatar == 3) {
            oLingkaran.rumusLuas();
            System.out.println("Masukkan panjang jari-jari: ");
            double jariJari = input.nextDouble();
            oLingkaran.nilaiJariJari(jariJari);
            oLingkaran.luasLingkaran();
        } else if (selectionBangunDatar == 4) {
            oPersegiPanjang.rumusLuas();
            System.out.println("Masukkan panjang: ");
            double panjang = input.nextDouble();
            oPersegiPanjang.nilaiPanjang(panjang);
            System.out.println("Masukkan lebar: ");
            double lebar = input.nextDouble();
            oPersegiPanjang.nilaiLebar(lebar);
            oPersegiPanjang.luasPersegiPanjang();
        } else if (selectionBangunDatar > 4) {
            System.out.println("Input Tidak Valid! Hanya input dari 1 - 4!");
        }

        input.close();
    }
}

// Abstract class bangunDatar
abstract class bangunDatar{
    // Abstract method
    public abstract void rumusLuas();
}

// Concrete class persegi (Subclass dari bangunDatar)
class persegi extends bangunDatar{
    private double sisi;
    private double luas;

    public void nilaiSisi(double sisi){
        this.sisi = sisi;
    }

    public void rumusLuas(){
        System.out.println("Sisi * Sisi");
    }

    public void luasPersegi(){
        luas = sisi*sisi;
        System.out.println(luas);
    }
}

// Concrete Class segitiga (Subclass dari bangunDatar)
class segitiga extends bangunDatar{
    private double alas;
    private double tinggi;
    private double luas;

    public void nilaiAlas(double alas){
        this.alas = alas;
    }

    public void nilaiTinggi(double tinggi){
        this.tinggi = tinggi;
    }

    public void rumusLuas(){
        System.out.println("(Alas * Tinggi) / 2");
    }

    public void luasSegitiga(){
        luas = (alas*tinggi)/2;
        System.out.println(luas);
    }
}

// Concrete Class lingkaran (Subclass dari bangunDatar)
class lingkaran extends bangunDatar{
    private double luas;
    private double jariJari;

    public void nilaiJariJari(double jariJari){
        this.jariJari = jariJari;
    }

    public void rumusLuas(){
        System.out.println("π * jari-jari^2");
    }

    public void luasLingkaran(){
        luas = (jariJari*jariJari) * 3.14;
        System.out.println(luas);
    }
}

// Concrete Class persegiPanjang (Subclass dari bangunDatar)
class persegiPanjang extends bangunDatar{
    private double panjang;
    private double lebar;
    private double luas;

    public void nilaiPanjang(double panjang){
        this.panjang = panjang;
    }

    public void nilaiLebar(double lebar){
        this.lebar = lebar;
    }

    public void rumusLuas(){
        System.out.println("panjang * lebar");
    }

    public void luasPersegiPanjang(){
        luas = panjang*lebar;
        System.out.println(luas);
    }
}