import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        String[] strArray = str.split("");
        int cnt = 0;
        for (String s : strArray){
            if (s.equals("1"))cnt++;
        }
        System.out.println(cnt);
    }
}