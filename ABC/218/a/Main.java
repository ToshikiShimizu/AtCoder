import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.next(); // toCharArrayでも良い
        System.out.println(s.charAt(n-1) == 'o' ? "Yes" : "No");
    }
}