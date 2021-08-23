import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        for (int i=0;i<s.length();i++){
            char c = s.charAt(s.length()-i-1);
            switch(c){
                case '6':
                c = '9';
                break;
                case '9':
                c = '6';
                break;
            }
            System.out.print(c);
        }
        System.out.println();
    }
}