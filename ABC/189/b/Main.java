import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt() * 100;
        for (int i=0;i<n;i++){
            int v = sc.nextInt();
            int p = sc.nextInt();
            x -= v*p;
            if (x<0){
                System.out.println(i+1);
                return;
            }
        }
        System.out.println(-1);
    }
}