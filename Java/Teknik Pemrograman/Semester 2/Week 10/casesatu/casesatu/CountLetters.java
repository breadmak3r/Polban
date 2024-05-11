/*************
 * 
 * CountLetters.java
 * 
 * CASE 1: EXCEPTIONS AREN'T ALWAYS ERRORS
 * 
 * Reads a words from the standard input and prints the number of occurences of each letter in that word.
 * 
 *************/

package casesatu;

import java.util.Scanner;
public class CountLetters {
    public static void main(String[] args){
        int[] counts = new int[26];
        Scanner scan = new Scanner(System.in);

        // Get word from user
        System.out.print("Enter a single word (letters only, please): ");
        String word = scan.nextLine();

        // Convert to all upper case
        word = word.toUpperCase();

        // Count frequency of each letter in string
        for(int i = 0; i < word.length(); i++){
            try {
                counts[word.charAt(i)-'A']++;
            } catch (ArrayIndexOutOfBoundsException e) {
                System.err.println("Error: Letters only!");
            }
        }

        // Print frequencies
        System.out.println();
        for(int i = 0; i < counts.length; i++ ){
            if (counts [i] != 0){
            }
        }
    }
}