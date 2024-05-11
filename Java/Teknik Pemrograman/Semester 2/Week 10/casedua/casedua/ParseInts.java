// **************************************************************** 
// ParseInts.java
//
// CASE 2: PLACING EXCEPTION HANDLERS 
// 
// Reads a line of text and prints the integers in the line. 
// 
// **************************************************************** 
package casedua;

import java.util.Scanner; 

public class ParseInts{ 
    public static void main(String[] args){ 
        int val;
        int sum = 0; 
        Scanner scan = new Scanner(System.in); 
        String line;
    
        System.out.println("Enter a line of text"); 
        Scanner scanLine = new Scanner(scan.nextLine()); 
    
        while (scanLine.hasNext()){ 
            try {
                val = Integer.parseInt(scanLine.next()); 
                sum += val; 
            } catch (Exception e) {
                // TODO: handle exception
            }
        } 
        
        System.out.println("The sum of the integers on this line is " + sum); 
        
        scan.close();
        scanLine.close();
    } 
} 