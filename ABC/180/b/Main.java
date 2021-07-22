import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long x;
        long man = 0;
        long euc_s = 0;
        long che = 0;
        for (int i=0; i<n; i++){
            x = sc.nextInt();
            man += Math.abs(x);
            euc_s += x*x;
            che = Math.max(che, Math.abs(x));
        }
        System.out.println(man);
        System.out.println(Math.sqrt(euc_s));
        System.out.println(che);
    }
}