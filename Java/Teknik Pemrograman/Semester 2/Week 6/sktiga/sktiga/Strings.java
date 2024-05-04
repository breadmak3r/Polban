package sktiga;
import java.util.Scanner;

public class Strings {
    public static void main(String[] args) {
        String[] strList;
        int size;

        Scanner scan = new Scanner(System.in);
        System.out.println("How many Strings do you want to sort?");

        size = scan.nextInt();
        strList = new String[size];

        System.out.println("\nEnter the Strings...");
        scan.nextLine();
        for(int i = 0; i < size; i++){
            strList[i] = scan.nextLine();
        }

        Sorting.insertionSort(strList);

        System.out.println("\nYour Strings in sorted order (descending)...");

        for(int i = 0; i < size; i++){
            System.out.println(strList[i] + "   ");
        }
    }
}
