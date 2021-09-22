import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i=0;i<t;i++){
            int l = sc.nextInt();
            int r = sc.nextInt();
            long n = r - l * 2 + 1;
            if (n<=0){
                System.out.println(0);
            }else{
                System.out.println(n*(n+1)/2);
            }
        }
    }
}

