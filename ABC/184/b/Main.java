import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x = sc.nextInt();
        String S = sc.next();
        for (int i=0;i<n;i++){
            if (S.charAt(i)=='o'){
                x++;
            }else{
                if(x>0){
                    x--;
                }
            }
        }
        System.out.println(x);

    }
}