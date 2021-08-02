import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = 0;
        double[][] point = new double[n][2];
        for (int i=0; i<n; i++){
            point[i][0] = sc.nextInt();
            point[i][1] = sc.nextInt();
        }
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                double angle = (point[j][1] - point[i][1])/(point[j][0] - point[i][0]); // 除算はせずに絶対値の大小比較をした方がdoubleを回避できるのでよかった
                if (-1 <= angle && angle <= 1){
                    ans++;
                }
            }
        }
        System.out.println(ans);
    }
}