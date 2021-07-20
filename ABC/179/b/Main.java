import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int d1, d2;
        int cnt = 0;
        String ans = "No";
        for(int i=0; i<n; i++){
            d1 = sc.nextInt();
            d2 = sc.nextInt();
            if (d1==d2){
                cnt++;
                if(cnt>=3){
                    ans = "Yes";
                }
            }else{
                cnt = 0;
            }

        }
        System.out.println(ans);
    }
}