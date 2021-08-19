import java.util.*;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<Integer> A = new ArrayList<>();
        List<Integer> B = new ArrayList<>();
        for (int i=0; i<n; i++){
            A.add(sc.nextInt());
        }

        for (int i=0; i<n; i++){
            B.add(sc.nextInt());
        }

        System.out.println(Math.max(Collections.min(B) - Collections.max(A) + 1, 0));
    }
}