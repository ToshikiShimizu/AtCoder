import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String S = sc.next();
        String[] SArray = S.split("");
        for (int i=0;i<n;i++){
            if(SArray[i].equals("1")){
                // System.out.println(i);
                if(i%2==0){
                    System.out.println("Takahashi");
                }else{
                    System.out.println("Aoki");
                }
                return;
            }
        }
 
    }
}