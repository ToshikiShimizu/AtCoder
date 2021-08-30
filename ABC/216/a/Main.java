import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String xy = sc.next();
        int y = Integer.parseInt(xy.substring(xy.length()-1));
        System.out.print(xy.substring(0, xy.length()-2));
        if (y<=2){
            System.out.println("-");
        } else if (y<=6){
            System.out.println("");
        } else{
            System.out.println("+");
        }
    }
}