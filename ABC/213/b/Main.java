import java.util.*;
public class Main{
    public static void main(String[] args) {
        var sc = new Scanner(System.in);
        int n = sc.nextInt();
        Map<Integer, Integer> map = new HashMap<>();
        List<Integer> list = new ArrayList<>();
        for (int i=0; i<n; i++){
            int key = sc.nextInt();
            map.put(key, i);
            list.add(key);
        }
        Collections.sort(list);
        System.out.println(map.get(list.get(n-2)) + 1);
    }
}