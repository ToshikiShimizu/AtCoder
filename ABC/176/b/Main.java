import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String N = sc.next();
        int sm = 0;
        String[] NArray = N.split("");
        for(String n : NArray) {
            sm += Integer.parseInt(n);         
        }

        if (sm%9==0){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
    }
}