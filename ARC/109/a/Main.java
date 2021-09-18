import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        /*
        横方向の差分は1、縦方向の差分は0~N
        */
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int x = sc.nextInt();
        int y = sc.nextInt();
        int diff = Math.min(Math.abs(a-b), Math.abs(a-1-b));
        int ans1 = x * ( 1 + diff * 2);
        int ans2 = x + y * diff;
        System.out.println(Math.min(ans1, ans2));
    }
}