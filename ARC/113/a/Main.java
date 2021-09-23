import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        long cnt = 0;
        for (int i=1;i<=k;i++){
            for (int j=1;i*j<=k;j++){
                for (int h=1;i*j*h<=k;h++){
                    cnt++;
                }
            }
        }
        System.out.println(cnt);
    }
}