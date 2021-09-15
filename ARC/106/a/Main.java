import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        for (long a = 1, x = 3; x < n; a++, x*=3){
            for (long b = 1,  y = 5; y < n; b++, y*= 5){
                if (x + y == n){
                    System.out.println(a + " " + b);
                    return;
                }
            }
        }
        System.out.println(-1);
    }
}