import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double n = sc.nextInt();
        int x = (int) (n * 1.08); // 計算部分も()が必要
        // N = ( N * 108 ) / 100 ;みたいな書き方もあり
        // System.out.println(x);
        if (x<206){
            System.out.println("Yay!");
        }else if(x==206){
            System.out.println("so-so");
        }else{
            System.out.println(":(");
        }
    }
}
