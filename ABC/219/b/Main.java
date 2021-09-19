import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] s = new String[3];
        StringBuilder sb = new StringBuilder();
        s[0] = sc.next();
        s[1] = sc.next();
        s[2] = sc.next();
        String t = sc.next();
        for (int i=0; i < t.length(); i++){
            String e = s[Character.getNumericValue(t.charAt(i)) - 1];
            sb.append(e);
        }
        System.out.println(sb);
    }
}