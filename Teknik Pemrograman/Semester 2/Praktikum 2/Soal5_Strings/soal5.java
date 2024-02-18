import java.util.Scanner;

public class soal5 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
    
        String A, B;
        System.out.println("Input kata: ");
        A = scan.nextLine();
        B = scan.nextLine();
        scan.close();
        int length = A.length() + B.length();

        String kataPertama, kataKedua;
        String compare = (A.compareTo(B) > 0)? "Iya" : "Tidak";

        String KapitalA = A.substring(0, 1).toUpperCase();
        kataPertama = KapitalA + A.substring(1);

        String KapitalB = B.substring(0, 1).toUpperCase();
        kataKedua = KapitalB + B.substring(1);

        System.out.println("Hasil: ");
        System.out.println(length);
        System.out.println(compare);
        System.out.println(kataPertama + " " + kataKedua);
    }
}
