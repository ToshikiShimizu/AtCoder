import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        if (b==0){
            System.out.println("Gold");
        }else if(a==0){
            System.out.println("Silver");
        }else{
            System.out.println("Alloy");
        }
    }
}