package sktiga;

import java.util.Scanner;

public class WeeklySales {
    public static void main(String[] args) {
        String first, last;
        int sales;
        Salesperson[] salesStaff = new Salesperson[10];
        Scanner scan = new Scanner(System.in);

        for(int i = 0; i < salesStaff.length; i++){
            System.out.println("\nInput data untuk Sales ke-" + (i + 1));
            System.out.print("First Name = ");
            first = scan.nextLine();
            System.out.print("Last Name = ");
            last = scan.nextLine();
            System.out.print("Total Sales = ");
            sales = scan.nextInt();
            salesStaff[i] = new Salesperson(first, last, sales);
            scan.nextLine();
        }

        Sorting.insertionSort(salesStaff);

        System.out.println("\nRanking of Sales for the Week \n");
        for(Salesperson s : salesStaff){
            System.out.println(s);
        }
    }
}
