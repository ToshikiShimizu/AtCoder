import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.next();
        if (n.equals("0")){
            System.out.println("Yes");
            return;
        }
        // 末尾の0を削除
        while(n.charAt(n.length()-1) == '0'){
            n = n.substring(0, n.length()-1);
        }

        int half = n.length() / 2;

        for (int i=0; i<half; i++){
            if(n.charAt(i) != n.charAt(n.length()-1-i)){
                System.out.println("No");
                return;
            }
        }
        System.out.println("Yes");
        
    }
}