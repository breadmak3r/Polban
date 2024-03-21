public interface Store {

    static final double COMMISSION_RATE = 0.10;
    
    static final double TAX = 0.14;

    public double calculateCommission();

    public double calculateRemainingStoreRevenue(double storeSales);

    public double calculateBonus();

}