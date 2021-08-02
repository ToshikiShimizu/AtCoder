import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] A = new int[n];
        long sum = 0;
        for (int i=0; i<n; i++){
            A[i] = sc.nextInt();
        }
        for (int i=0; i<n; i++){
            sum += A[i] * sc.nextInt();
        }
        System.out.println(sum==0 ? "Yes" : "No");
    }
}