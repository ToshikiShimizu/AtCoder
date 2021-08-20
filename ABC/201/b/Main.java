import java.util.*;
public class Main{
    public static void main(String[] args) {
        // Listをsortする方法 

        // 名前List、高さListを用意
        // 高さListをdeepcopyしてsort
        // 2番目に高い山の標高をget
        // その標高でfindしてindexを取得
        // 名前Listでそのindexを指定してget

        // TreeMapを使う方法
        TreeMap<Integer, String> map = new TreeMap<>(); // 赤黒木はO(logN)で挿入、削除、検索ができる
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i=0; i<n; i++){
            String s = sc.next();
            int t = sc.nextInt();
            map.put(t, s);
        }
        map.pollLastEntry();
        System.out.println(map.get(map.lastKey()));


    }
}