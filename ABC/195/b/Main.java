import java.util.*;
public class Main{
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int W = sc.nextInt();
        int n = 1;
        int lower = -1;
        int upper = -1;
        while(A*n <= 1000*W){
            if (1000*W <= B*n){
                upper = n;
                if (lower == -1){
                    lower = n;
                }
            }
            n++;
        }
        if (lower==-1){
            System.out.println("UNSATISFIABLE");
        }else{
            System.out.println(lower + " " + upper);
        }

    }
}