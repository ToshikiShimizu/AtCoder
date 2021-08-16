import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int s = sc.nextInt();
        int t = sc.nextInt();
        int ans = 0;
        for (int i=0;i<=s;i++){
            for (int j=0;j<=s;j++){
                for (int k=0;k<=s;k++){
                    if (i+j+k<=s && i*j*k<=t)ans++;
                }
            }
        }
        System.out.println(ans);
    }
}