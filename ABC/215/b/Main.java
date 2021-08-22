import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        int i = 0;
        long x = 1;
        while(x<=n){
            i++;
            x*=2;
        }
        System.out.println(i-1);

    }
}