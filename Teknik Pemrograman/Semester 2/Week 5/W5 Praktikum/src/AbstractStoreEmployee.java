public abstract class AbstractStoreEmployee implements Employee, Store {

    private double basePay;
    String employeeName;
    private double hourlyRate;
    private double numberOfHoursWorked;
    private String storeDetails;

    public AbstractStoreEmployee(double numberOfHoursWorked, double hourlyRate, String storeDetails,
            double basePay, String employeeName) {
        this.numberOfHoursWorked = numberOfHoursWorked;
        this.hourlyRate = hourlyRate;
        this.storeDetails = storeDetails;
        this.basePay = basePay;
        this.employeeName = employeeName;
    }

    @Override
    public double calculateCommission() {
        return 0;
    }

    @Override
    public abstract double calculatePay();

    @Override
    public double calculateRemainingStoreRevenue(double storeSales) {
        double employeePay = calculatePay();
        double storeRevenue = 0;

        storeRevenue = storeSales * (1 - TAX) - employeePay;

        if (storeSales > 255000) {
            storeRevenue = (1 - 0.05) * storeRevenue;
        } else if (storeSales > 155000 && storeSales <= 255000) {
            storeRevenue = (1 - 0.03) * storeRevenue;
        } else {
            storeRevenue = (1 - 0.01) * storeRevenue;
        }
        return storeRevenue;
    }

    @Override
    public abstract boolean checkPromotionEligibility();

    public abstract double calculateBonus();

    public double getBasePay() {
        return basePay;
    }

    public void setBasePay(double basePay) {
        this.basePay = basePay;
    }

    public String getEmployeeName() {
        return employeeName;
    }

    public void setEmployeeName(String employeeName) {
        this.employeeName = employeeName;
    }

    public double getHourlyRate() {
        return hourlyRate;
    }

    public void setHourlyRate(double hourlyRate) {
        this.hourlyRate = hourlyRate;
    }

    public double getNumberOfHoursWorked() {
        return numberOfHoursWorked;
    }

    public void setNumberOfHoursWorked(double numberOfHoursWorked) {
        this.numberOfHoursWorked = numberOfHoursWorked;
    }

    public void setStoreDetails(String storeDetails) {
        this.storeDetails = storeDetails;
    }

    @Override
    public String toString() {
        return "Store Details: " + storeDetails + "\nEmployee Name: " + employeeName
                + "\nBase Pay: $" + basePay + "\nNumber of Hours worked: " + numberOfHoursWorked + "hrs"
                + "\nPayment Rate per hour: $" + hourlyRate + "/hr\n";
    }
}