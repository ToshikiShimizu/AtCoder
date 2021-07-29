import java.util.Scanner;
import java.util.HashSet;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String answer = "Yes";
        HashSet<String> set = new HashSet<>();
        for (int i=0;i<4;i++){
            String s = sc.next();
            if (set.contains(s)){
                answer = "No";
            }
            set.add(s);
        }
        System.out.println(answer);
    }
}