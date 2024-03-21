public class SalesAssociate extends AbstractStoreEmployee {

    private final double salesRate;

    public SalesAssociate(double salesRate, double numberOfHoursWorked, double hourlyRate,
            String storeDetails, String associateName, double basePay) {
        super(numberOfHoursWorked, hourlyRate, storeDetails, basePay, associateName);
        this.salesRate = salesRate;
    }

    @Override
    public double calculateCommission() {
        if (getSalesRate() > 30) {
            return super.getBasePay() * COMMISSION_RATE;
        } else {
            return 0.0;
        }
    }

    @Override
    public double calculatePay() {
        return super.getBasePay() + calculateCommission() + 
                (super.getNumberOfHoursWorked() * super.getHourlyRate());
    }

    @Override
    public boolean checkPromotionEligibility() {
        if (calculatePay() > 25000.0) {
            return true;
        } else {
            return false;
        }
    }

    public double getSalesRate() {
        return salesRate * 100;
    }

    @Override
    public String toString() {
        return super.toString() + "Sales Rate: " + getSalesRate() + "%";
    }

    @Override
    public double calculateBonus() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'calculateBonus'");
    }

}