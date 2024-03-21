public class SecurityGuard extends AbstractStoreEmployee {

    private double securityHours;

    public SecurityGuard(double securityHours, double numberOfHoursWorked, double hourlyRate, String storeDetails,
                         double basePay, String employeeName) {
        super(numberOfHoursWorked, hourlyRate, storeDetails, basePay, employeeName);
        this.securityHours = securityHours;
    }

    @Override
    public double calculatePay() {
        return super.getBasePay() + (super.getNumberOfHoursWorked() * super.getHourlyRate());
    }

    @Override
    public boolean checkPromotionEligibility() {
        return super.getNumberOfHoursWorked() >= 2080;
    }
    
    public double getSecurityHours(){
        return securityHours;
    }

    public void setSecurityHours(double securityHours){
        this.securityHours = securityHours;
    }

    @Override
    public String toString() {
        return super.toString() + "Security Hours: " + securityHours + "\n";
    }

    @Override
    public double calculateBonus() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'calculateBonus'");
    }
}
