import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int d = sc.nextInt();
        if (b>=d*c){
            System.out.println(-1);
        } else {
            System.out.println(1 + (a-1) / (d*c-b));
        }
    }
}