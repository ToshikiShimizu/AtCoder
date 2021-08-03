import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int cond1_cnt = 0;
        int cond2_cnt = 0;
        for (int i=0;i<3;i++){
            int a = Integer.parseInt(String.valueOf(s.charAt(i)));
            int b = Integer.parseInt(String.valueOf(s.charAt(i+1)));
            if (a==b){
                cond1_cnt++;
            }
            if ((a+ 1) % 10 == b % 10){
                cond2_cnt++;
            }
        }
        if (cond1_cnt != 3 && cond2_cnt != 3){
            System.out.println("Strong");
        }else{
            System.out.println("Weak");
        }
    }
}