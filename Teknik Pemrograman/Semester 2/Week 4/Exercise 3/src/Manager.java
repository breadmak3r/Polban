import java.util.Calendar;
import java.util.GregorianCalendar;

class Manager extends Employee{
    public Manager(String n, double s, int d, int m, int y){
        super(n, s, d, m, y);
        secretaryName = "";
    }

    public int compare(Sortable b){
        Manager eb = (Manager) b;
        if(getSalary() < eb.getSalary()) return -1;
        if(getSalary() > eb.getSalary()) return +1;
        return 0;
    }

    public void raiseSalary(double byPercent){
        // add 1/2% bonus for every year of service
        GregorianCalendar todaysDate = new GregorianCalendar();
        int currentYear = todaysDate.get(Calendar.YEAR);
        double bonus = 0.5 * (currentYear - hireyear());
        super.raiseSalary(byPercent + bonus);
    }

    public String getSecretaryName(){
        return secretaryName;
    }

    private String secretaryName;
}
