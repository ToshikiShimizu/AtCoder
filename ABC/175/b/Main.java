import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collections;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long ans = 0;
        int n = sc.nextInt();
        // 配列を用意
        ArrayList<Long> AL = new ArrayList<>();
        long L[] = new long[n];

        // データ読み込み
        for (int i=0; i<n; i++){
            long l = sc.nextLong();
            AL.add(l);

        }

        // ソート
        Collections.sort(AL);
        for (int i=0; i<n;i++){
            L[i] = AL.get(i);
        }

        // 三重ループ
        for (int i=0; i<n; i++)
            for (int j=i+1; j<n; j++)
                for (int k=j+1; k<n; k++){
                    long li = AL.get(i);
                    long lj = AL.get(j);
                    long lk = AL.get(k);
                    if (li+lj<=lk){
                        continue;
                    }else if(li!=lj && lj!=lk && lk!=li){
                        ans++;
                    }
                }
        System.out.println(ans);
    }
}