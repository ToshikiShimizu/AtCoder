import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long m = 1;
        long ans = Long.MAX_VALUE;
        for(int b=0; m<=n; b++,m*=2){
            long a = n/m;
            long c = n%m;
            ans = Math.min(ans, a+b+c);
            //System.out.println(a + " " + b + " " + c);
        }
        System.out.println(ans);
    }
}