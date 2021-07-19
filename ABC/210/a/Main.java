import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a = sc.nextInt();
        int x = sc.nextInt();
        int y = sc.nextInt();
        int n_x = Math.min(n,a);
        int n_y = n-n_x;
        System.out.println(n_x*x + n_y*y);
    }
}