public class soal4 {
    static short methodOne (long num){
        int i = (int) 1;
        return (short) i;
    }
    public static void main(String[] args){
        double d = 10.25;
        float f = (float) d;
        byte b = (byte) methodOne((long) f);
        System.out.println(b);
    }
}
