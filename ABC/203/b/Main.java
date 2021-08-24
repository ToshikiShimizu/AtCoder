import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ans = 0;
        int n = sc.nextInt();
        int k = sc.nextInt();
        for (int i=0; i<n; i++){
            for (int j=0; j<k; j++){
                ans += 100 * (i+1) + (j+1);
            }
        }
        System.out.println(ans);
    }
}