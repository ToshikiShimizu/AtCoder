import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        int MOD = 998244353;
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        long c = sc.nextLong();
        long x = (a * (a+1) / 2 ) % MOD;
        long y = (b * (b+1) / 2 ) % MOD;
        long z = (c * (c+1) / 2 ) % MOD;
        long ans = (x * y) % MOD;
        ans = ( ans * z ) % MOD;
        System.out.println(ans);
    }
}