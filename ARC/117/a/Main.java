import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int sign = 1;
        if (a<b){
            int tmp = a;
            a = b;
            b = tmp;
            sign = -1;
        }
        int sum = 0;
        for (int i=1; i<=a; i++){
            int e = sign * i;
            sum += e;
            System.out.print(e);
            System.out.print(" ");
        }
        for (int i=1; i<b; i++){
            int e = - sign * i;
            sum += e;
            System.out.print(e);
            System.out.print(" ");
        }
        System.out.println(-sum);
    }
}