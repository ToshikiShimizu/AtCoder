import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long [] A = new long [n];
        long max = 0;
        long s = 0;
        long sum_s = 0;
        for (int i=0; i<n;i++){
            A[i] = sc.nextLong();
            max = Math.max(max, A[i]);
            s += A[i];
            sum_s += s;
            long ans = sum_s + max * (i+1);
            System.out.println(ans);
        }
    }
}