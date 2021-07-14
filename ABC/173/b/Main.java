import java.util.Map;
import java.util.Scanner;
import java.util.HashMap;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String a = null;
        String status[] = {"AC", "WA", "TLE", "RE"};
        Map<String, Integer> counter = new HashMap<>();
        for (String key : status){
            counter.put(key, 0); // getOrDefaultを使っても良かった
        }
        for (int i=0;i<n;i++){
            a = sc.next();        
            counter.put(a, counter.get(a)+1);
        }
        for (String key : status){
            System.out.println(key + " x " + counter.get(key));
        }
    }
}