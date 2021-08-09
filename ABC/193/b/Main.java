import java.util.*;

public class Main{
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = Integer.MAX_VALUE;
        for (int i=0;i<n;i++){
            int a = sc.nextInt();
            int p = sc.nextInt();
            int x = sc.nextInt();
            if (a < x && ans > p){
                ans = p;
            }

        }
        if (ans == Integer.MAX_VALUE){
            ans = -1;
        }
        System.out.println(ans);
    }
}