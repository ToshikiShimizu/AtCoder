import java.util.*;
public class Main{
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        String ans = "Yes";
        String s = sc.next();
        for(int i=0; i<s.length(); i++){
            if (i%2==0 ^ Character.isLowerCase(s.charAt(i))){
                ans = "No";
            }
        }
        System.out.println(ans);
    }
}