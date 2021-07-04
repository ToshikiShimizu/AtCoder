import java.util.*;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[3]; // int a,b,cに読み込んでから、配列を作っても良い。
        Arrays.setAll(a, i->sc.nextInt()); // forを回しても良い
        Arrays.sort(a);
        if (a[2]-a[1] == a[1]-a[0]){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
    }
}