import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        int price = - n / 2;
        for (int i=0; i<n; i++){
            price += sc.nextInt();
        }
        System.out.println(price <= x ? "Yes" : "No");
    }
}