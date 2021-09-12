import java.util.*;
public class Main{
    public static void main(String[] args) {
        String ans = "";
        //char[] alphabet = "abcdefghijklmnopqrstuvwxyz".toCharArray();
        Scanner sc = new Scanner(System.in);
        for (int i = 0 ; i < 26 ; i++){
            int p = sc.nextInt();
            //ans += alphabet[p-1];
            ans += (char) ('a' + p - 1);
        }
        System.out.println(ans);
    }
}