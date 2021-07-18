import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S = sc.next();
        String T = sc.next();
        int ans = 1000;
        for (int i=0; i<S.length()-T.length()+1; i++){
            int count = 0;
            for (int j=0;j<T.length(); j++){
                if (T.charAt(j)!=S.charAt(i+j))count++;
            }
            ans = Math.min(ans, count);
        }
        System.out.println(ans);
    }
}