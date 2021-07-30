import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n_max = sc.nextLong();
        long n = n_max;
        int m = sc.nextInt();
        long t = sc.nextLong();
        long a = 0;
        long b = 0;
        for (int i=0; i<m; i++){
            a = sc.nextLong();
            
            n -= a-b;
            if(n<=0){
                System.out.println("No");
                return;
            }
            b = sc.nextLong();
            n += b-a;
            if(n>n_max){
                n = n_max;
            }
        }
        n -= t-b;
        if(n<=0){
            System.out.println("No");
        }else{
            System.out.println("Yes");
        }
        
    }
}