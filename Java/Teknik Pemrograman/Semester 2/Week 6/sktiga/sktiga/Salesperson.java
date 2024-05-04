package sktiga;

public class Salesperson implements Comparable<Salesperson>{
    private String firstName, lastName;
    private int totalSales;

    public Salesperson(String first, String last, int sales){
        firstName = first;
        lastName = last;
        totalSales = sales;
    }

    public String toString(){
        return lastName + ", " + firstName + ": \t" + totalSales;
    }

    public boolean equals(Object other){
        if (other instanceof Salesperson) {
            Salesperson otherSalesperson = (Salesperson) other;
            return lastName.equals(otherSalesperson.lastName) && firstName.equals(otherSalesperson.firstName);
        }
        return false;
    }

    public int compareTo(Salesperson o){
        if (totalSales != o.totalSales) {
            return Integer.compare(totalSales, o.totalSales);
        }
        
        int result = lastName.compareTo(o.lastName);
        if (result != 0) {
            return result;            
        }
        return firstName.compareTo(o.firstName);
    }

    public String getFirstName(){
        return firstName;
    }

    public String getLastName(){
        return lastName;
    }

    public int getTotalSales(){
        return totalSales;
    }
}
