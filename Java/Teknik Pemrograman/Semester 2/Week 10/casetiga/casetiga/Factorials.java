/*************
 * 
 * Factorials.java
 * 
 * CASE 3: Throwing Exceptions
 * 
 * Reads integers from the user and prints the factorial of each.
 * 
 *************/

import java.util.Scanner;

public class Factorials {
    public static void main(String[] args) {
        String keepGoing = "y";
        Scanner scan = new Scanner(System.in);
        while (keepGoing.equals("y") || keepGoing.equals("Y")) {
            try {
                System.out.println("Enter an integer: ");
                int val = scan.nextInt();
                System.out.println("Factorial (" + val + ") = " + MathUtils.factorial(val));
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
            System.out.println("Another factorial?  (y/n) ");
            keepGoing = scan.next();
        }
        scan.close();
    }
}
