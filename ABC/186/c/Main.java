import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = 0;
        for (int i = 1 ; i <= n ; i++){
            if (!(Integer.toString(i).contains("7") || Integer.toOctalString(i).contains("7"))){
                ans++;
            }
        }
        System.out.println(ans);
    }
}