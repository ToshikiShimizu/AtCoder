import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        HashSet<String> set = new HashSet<>();
        for (int i=0; i<n; i++){
            String s = sc.next();
            String t = sc.next();
            set.add(s+" "+t);
        }
        System.out.println(set.size()==n ? "No" : "Yes");
    }
    
}