import java.util.*;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long d = sc.nextInt(); // nextLongにする必要性はない
        long d_square = d * d;
        int ans = 0;
        for (int i=0;i<n;i++){
            long x = sc.nextInt();
            long y = sc.nextInt();
            if (x*x + y*y <= d_square){ // できれば浮動小数点演算は避けたい
                ans++;
            }
        }
        System.out.println(ans);
    }
}