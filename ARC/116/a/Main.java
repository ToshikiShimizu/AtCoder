import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i=0; i<t; i++){
            long n = sc.nextLong();
            if (n%4==0){
                System.out.println("Even");
            }else if (n%2==1){
                System.out.println("Odd");
            }else{
                System.out.println("Same");
            }
        }
    }
}