public class main {
    public static void main(String[] args) {
        // Buat objek untuk Asep (FullTime) dan Ujang (PartTime)
        fulltime asep = new fulltime();
        partTime ujang = new partTime();

        // Atur nilai-nilai yang diperlukan
        asep.setSalary(5000000); // Gaji pokok Asep sebagai staf manager
        asep.setTunjanganJabatan(5000000); // Tunjangan jabatan untuk staf manager
        asep.setTunjanganKomunikasi(500000); // Tunjangan komunikasi untuk semua karyawan
        asep.setLoan(500000); // Pinjaman koperasi yang dipotong per bulan
        
        ujang.setSalary(3000000); // Gaji pokok Ujang sebagai staf programmer
        ujang.setJamLembur(5);
        ujang.setJumlahAnak(0); // Ujang belum menikah

        // Hitung total gaji Asep dan Ujang di bulan April
        double totalGajiAsep = asep.hitungGaji();
        double totalGajiUjang = ujang.hitungGaji();

        // Tampilkan total gaji Asep dan Ujang di bulan April
        System.out.println("Total gaji Asep di bulan April: Rp " + totalGajiAsep);
        System.out.println("Total gaji Ujang di bulan April: Rp " + totalGajiUjang);
    }
}
