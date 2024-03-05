/*
Praktikum 2 - Soal 1
Nama: Alnez Rainansantana
NIM: 231524001
Tanggal: 15 Februari 2024
POLITEKNIK NEGERI BANDUNG 
*/

import java.util.Scanner;


public class soal1 {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        //Input test cases
        System.out.println("Test Cases: ");
        Integer T = in.nextInt();
        String[] number = new String[T];

        //Cek Data Types4
        Integer intMin = -2147483648;
        Integer intMax = 2147483647;
        short shortMin = -32768;
        short shortMax = 32767;
        long longMin = -9223372036854775808L;
        long longMax = 9223372036854775807L;
        byte byteMin = -128;
        byte byteMax = 127;


        for(int i = 0; i < T; i++){
            number[i] = in.next();
        }

        for(int i = 0; i < T; i++){
            try{
                long parseLong = Long.parseLong(number[i]);
                System.out.println(parseLong + " can be fitted in:");
                if (parseLong >= longMin && parseLong <= longMax) {
                    System.out.println("* Long");
                    if (parseLong >= intMin && parseLong <= intMax) {
                        System.out.println("* Integer");
                        if (parseLong >= shortMin && parseLong <= shortMax) {
                            System.out.println("* Short");
                            if (parseLong >= byteMin && parseLong <= byteMax) {
                                System.out.println("* Byte");
                            } 
                        }
                    }
                }
            }
            catch(Exception e){
                System.out.println(number[i] + " can't be fitted anywhere");
            }
        }
    in.close();
    }
}
