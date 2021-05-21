import java.util.Scanner;
public class Codeforces {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        while (t-- > 0) {
            long n, m;
            n = sc.nextLong();
            m = sc.nextLong();
            long i, j;
            long x;
            x = sc.nextLong();
            if (x % n == 0) {
                i = n;
                j = x / n;
            } else {
                i = x - ((x / n)*n + 1)+1;
                j = (x / n) + 1;
            }
            long v = (i - 1) * m;
            v = v + j;
            System.out.println(v);
        }
        
    }
}
