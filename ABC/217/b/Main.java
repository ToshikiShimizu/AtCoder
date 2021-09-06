import java.util.*;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashSet<String> set = new HashSet<>();

        set.add("ABC");
        set.add("ARC");
        set.add("AGC");
        set.add("AHC");

        for (int i=0;i<3;i++){
            set.remove(sc.next());
        }

        // for (String s: set){
        //     System.out.println(s);
        // }
        System.out.println(set.iterator().next());
    }
}