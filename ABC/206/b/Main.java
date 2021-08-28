import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int i = 0;
        int sum = 0;
        while(true){
            sum += i;
            if (n <= sum){
                System.out.println(i);
                return;
            }
            i++;
        }
    }
}