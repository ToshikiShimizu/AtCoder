import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        long c = sc.nextLong();
        long x = 2 * b - a - c;
        long ans = x + 3 * (Math.max(0, (1-x)/2));
        System.out.println(ans);

    }
}