import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextInt();
        int k = sc.nextInt();

        for (int i=0; i<k; i++){
            // System.out.println(n);
            if (n%200 == 0){
                n /= 200;
            }else{
                String s = Long.toString(n);
                s += "200";
                n = Long.valueOf(s);
            }
        }
        System.out.println(n);
    }
}