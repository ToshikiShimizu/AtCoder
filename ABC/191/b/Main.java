import java.util.*;

public class Main{
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        var n = sc.nextInt();
        var x = sc.nextLong();
        List<Long> list = new ArrayList<>();
        for (int i=0;i<n;i++){
            long a = sc.nextLong();
            if (a!=x){
                list.add(a);
            }
        }
        System.out.println(Arrays.toString(list.toArray()).replace(",", "").replace("[","").replace("]",""));

    }
}