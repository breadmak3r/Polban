public class partTime extends employee {
    private double jamLembur;
    private int jumlahAnak;

    public double getJamLembur(){
        return jamLembur;
    }

    public void setJamLembur(double jamLembur){
        this.jamLembur = jamLembur;
    }

    public int getJumlahAnak(){
        return jumlahAnak;
    }

    public void setJumlahAnak(int jumlahAnak){
        this.jumlahAnak = jumlahAnak;
    }

    public double hitungGaji(){
        double totalGaji = getSalary() + (jamLembur * 30000);
        return totalGaji;
    }
}
