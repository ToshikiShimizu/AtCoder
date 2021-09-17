import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long s = sc.nextLong();
        long p = sc.nextLong();
        boolean ans = false;
        for (long n = 1; n*n<=p; n++){
            long m = s - n;
            if (m*n==p){
                ans = true;
            }
        }
        System.out.println(ans ? "Yes" : "No");
    }
}