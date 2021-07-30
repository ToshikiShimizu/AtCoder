import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int w = sc.nextInt();
        int a_min = 100;
        int sm = 0;
        for (int i=0;i<h*w;i++){
            int a = sc.nextInt();
            sm += a;
            a_min = Math.min(a, a_min);
        }
        System.out.println(sm - h*w*a_min);
    }
}