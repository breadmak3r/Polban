public class Manager extends AbstractStoreEmployee {

    private double bonusRate;
    private double salesDone;
    private double totalStoreSales;
    private double basePay;

    public Manager(double totalStoreSales, double salesDone, double numberOfHoursWorked,
            double hourlyRate, String storeDetails, double basePay, String name) {
        super(numberOfHoursWorked, hourlyRate, storeDetails, basePay, name);
        this.bonusRate = bonusRate;
        this.salesDone = salesDone;
        this.totalStoreSales = totalStoreSales;
        this.bonusRate = 0;
    }

    @Override
    public double calculatePay() {

        if (salesDone > 25000) {
            bonusRate = 15.00;
        } else if (salesDone > 5000 && salesDone <= 25000) {
            bonusRate = 10.00;
        } else {
            bonusRate = 1;
        }

        return (super.getNumberOfHoursWorked() * super.getHourlyRate()
                + super.getBasePay()) * (1 + bonusRate / 100);

    }

    @Override
    public boolean checkPromotionEligibility() {

        if (calculatePay() > 50000.0) {

            return true;
        } else {

            return false;
        }
    }

    public double getBonusRate() {
        return bonusRate / 100;
    }

    public double getSalesDone() {
        return salesDone;
    }

    public double getTotalStoreSales() {
        return totalStoreSales;
    }

    public double salesPercentByManager() {
        return (salesDone / totalStoreSales) * 100;
    }

    public void setBonusRate(double bonusRate) {
        this.bonusRate = bonusRate;
    }

    public void setSalesDone(double salesDone) {
        this.salesDone = salesDone;
    }

    public void setTotalStoreSales(double totalStoreSales) {
        this.totalStoreSales = totalStoreSales;
    }

    @Override
    public String toString() {
        return super.toString() + "Total Sales in store: $" + totalStoreSales
                + "\nSales done: $" + salesDone;
    }

    @Override
    public double calculateBonus() {
        return 0.05 * basePay;
    }
}