import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int a = x / 500;
        x -= 500 * a;
        int b = x / 5;
        System.out.println(1000*a + 5*b);
    }
}