import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int n;
        String answer = "APPROVED"; // boolean ok とかのほうが良いかも
        for (int i=0;i<a;i++){ // 配列にしても良い
            n = sc.nextInt();
            if (n%2==0 && (n%3!=0 && n%5!=0) ){
                answer = "DENIED"; // ここでprintしてreturnしてもよい
            }

        }
        System.out.println(answer);
    }
}