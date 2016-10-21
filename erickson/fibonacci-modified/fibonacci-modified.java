import java.math.BigInteger;
import java.util.Scanner;

public class fibonacci-modified {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        BigInteger t1, t2, t = BigInteger.valueOf(0);
        int n;
        t1 = BigInteger.valueOf(scanner.nextInt());
        t2 = BigInteger.valueOf(scanner.nextInt());
        n = scanner.nextInt();
        for (int i = 2; i < n; i++) {
            BigInteger product = t2.multiply(t2);
            BigInteger sum = t1.add(product);
            t = sum;
            t1 = t2;
            t2 = t;
        }
        System.out.println(t);
        scanner.close();
    }
}
