import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        var n = sc.nextInt();
        var s = sc.nextDouble();
        var d = sc.nextDouble();
        for (int i = 0; i < n; i++){
            var x = sc.nextDouble();
            var y = sc.nextDouble();
            if (x<s && y>d){
                System.out.println("Yes");
                return;
            }
        }
        System.out.println("No");

    }
}