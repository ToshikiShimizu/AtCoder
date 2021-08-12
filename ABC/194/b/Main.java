import java.util.*;

public class Main{
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer> A = new ArrayList<>();
        List<Integer> B = new ArrayList<>();
        for (int i=0;i<n;i++){
            A.add(sc.nextInt());
            B.add(sc.nextInt());
        }
        int min_a = Collections.min(A);
        int min_b = Collections.min(B);
        int argmin_a = A.indexOf(min_a);
        int argmin_b = B.indexOf(min_b);
        if (argmin_a != argmin_b){
            System.out.println(Math.max(min_a, min_b));
        }else{
            A.remove(argmin_a);
            B.remove(argmin_b);
            int second_min_a = Collections.min(A);
            int second_min_b = Collections.min(B);
            int ans = min_a + min_b;
            ans = Math.min(ans, Math.max(min_a, second_min_b));
            ans = Math.min(ans, Math.max(min_b, second_min_a));
            System.out.println(ans);

        }

    }
}