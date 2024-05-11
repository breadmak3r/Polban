/*************
 * 
 * MathUtils.java
 * 
 * CASE 3: Throwing Exceptions
 * 
 * Provides static mathematical utility functions.
 * 
 *************/

public class MathUtils {
    public static int factorial (int n) {
        if (n < 0) {
            throw new IllegalArgumentException("There is no factorial for negative int");
        } else if (n > 16) {
            throw new IllegalArgumentException("The factorials is too large for int");
        }
        int fac = 1;
        for(int i = n; i>0; i--){
            fac *= i;
        }
        return fac;
    }
}
