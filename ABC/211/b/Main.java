import java.util.Scanner;
import java.util.HashSet;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashSet<String> set = new HashSet<>();
        int Size = 4;
        for (int i=0;i<Size;i++){
            String s = sc.next();
            set.add(s);
        }
        System.out.println(set.size()==Size ? "Yes" : "No");
    }
}