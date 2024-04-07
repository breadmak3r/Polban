public class fulltime extends employee implements koperasi {

    private int jumlahAnak;
    private double tunjanganJabatan;
    private double tunjanganKomunikasi;
    private double loan;
    private int totalJamLembur;

    public double getTunjanganJabatan(){
        return tunjanganJabatan;
    }

    public void setTunjanganJabatan(double tunjanganJabatan){
        this.tunjanganJabatan = tunjanganJabatan;
    }

    public double getTunjanganKomunikasi(){
        return tunjanganKomunikasi;
    }

    public void setTunjanganKomunikasi(double tunjanganKomunikasi){
        this.tunjanganKomunikasi = tunjanganKomunikasi;
    }

    public double getLoan(){
        return loan;
    }

    public void setLoan(double loan){
        this.loan = loan;
    }

    public void setTotalJamLembur(int totalJamLembur){
        this.totalJamLembur = totalJamLembur;
    }

    @Override
    public double loanMonthly() {
        return 500000 * jumlahAnak;
    }

    public double hitungGaji(){
        double totalGaji = getSalary() + tunjanganJabatan + tunjanganKomunikasi - loan;
        return totalGaji;
    }
}
