import java.util.Scanner;
import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int p = sc.nextInt();
        ArrayList<Integer> factorial = new ArrayList<>();
        int n = 1;
        int ans = 0;
        for (int i=0;i<10;i++){
            n *= i+1;
            factorial.add(n);
        }
        Collections.reverse(factorial);
        for (int m: factorial){
            if (p / m > 0){
                int pay = p/m;
                ans += pay;
                p -= pay * m;
            }
        }
        System.out.println(ans);
    }
}