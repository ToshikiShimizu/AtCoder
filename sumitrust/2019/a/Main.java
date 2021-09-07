import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int d = -1;
        for (int i = 0; i < 4; i++){
            d = sc.nextInt();
        }
        System.out.println(d == 1 ? 1 : 0);
    }
}