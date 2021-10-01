import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long ans = 0;
        int[] a = new int [n];
        for (int i=0; i<n; i++){
            a[i] = sc.nextInt();
        }
        int max = a[0];
        for (int i=1; i<n; i++){
            if (a[i] < max){
                ans += max - a[i];
            }else{
                max = a[i];
            }
        }
        System.out.println(ans);
    }
}