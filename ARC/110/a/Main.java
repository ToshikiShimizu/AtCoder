import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long ans = 1;
        for (int i=2;i<=n;i++){
            ans *= i / gcd(ans, i);
        }
        System.out.println(ans+1);
    }


    public static long gcd(long a, long b){
        return b == 0 ? a : gcd(b, a%b);
    }
}