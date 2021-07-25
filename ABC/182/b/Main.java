import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int A[] = new int[n]; 
        for (int i=0; i<n; i++){
            A[i] = sc.nextInt();
        }
        int max_gcd = 0;
        int argmax_gcd = 0;
        for (int j=2; j<=1000; j++){
            int gcd = 0;

            for (int a : A){
                if (a%j==0){
                    gcd++;
                }
            }
            if (max_gcd < gcd){
                max_gcd = gcd;
                argmax_gcd = j;
            }
        }
        System.out.println(argmax_gcd);
        
    }
}