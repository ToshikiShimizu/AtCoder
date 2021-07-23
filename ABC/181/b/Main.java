import java.util.*;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long ans = 0;
        for (int i=0;i<n;i++){
            long a = sc.nextLong();
            long b = sc.nextLong();
            long x = b - a + 1;
            ans += x * (a + b) / 2;
        }
        System.out.println(ans);
    }
}