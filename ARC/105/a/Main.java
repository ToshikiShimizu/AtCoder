import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a =sc.nextInt();
        int b =sc.nextInt();
        int c =sc.nextInt();
        int d =sc.nextInt();
        int sum = a+b+c+d;
        if (sum % 2 != 0){
            System.out.println("No");
            return;
        }
        List<Integer> list = new ArrayList<>();
        list.add(a);
        list.add(b);
        list.add(c);
        list.add(d);
        list.add(a+b);
        list.add(a+c);
        list.add(a+d);
        list.add(b+c);
        list.add(b+d);
        list.add(c+d);
        if (list.contains(sum/2)){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
    }
}