package sksatu;

public class Commission extends Hourly {

    private double commissionRate;
    private double sales;

    public Commission(String eName, String eAddress, String ePhone, String socSecNumber, double rate, double commRate){
        super(eName, eAddress, ePhone, socSecNumber, rate);
        this.commissionRate = commRate;
    }

    public void addSales(double totalSales){
        sales += totalSales;
    }

    @Override
    public double pay(){
        double basePay = super.pay();
        double commission = sales * commissionRate;
        sales = 0;
        return basePay + commission;
    }

    @Override
    public String toString(){
        String hourlyInfo = super.toString();
        return hourlyInfo + ", Total Sales: " + sales;
    }
}