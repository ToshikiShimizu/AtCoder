import java.util.Scanner;
import java.util.Arrays;
public class Main{

    public static void mark(int[][] card, int b, int Size){
        for (int i=0;i<Size;i++){
            for (int j=0;j<Size;j++){
                if (card[i][j] == b){
                    card[i][j] = 0;
                }
            }
        }  
    }     

        public static boolean check(int[][] card, int Size){
            for (int i=0;i<Size;i++){
                if (card[i][0] + card[i][1] + card[i][2] == 0){
                    return true;
                } 
            }
            for (int i=0;i<Size;i++){
                if (card[0][i] + card[1][i] + card[2][i] == 0){
                    return true;
                } 
            }
            if (card[0][0] + card[1][1] + card[2][2] == 0){
                return true;
            } 
            if (card[2][0] + card[1][1] + card[0][2] == 0){
                return true;
            } 
            return false;

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int Size = 3;
        int[][] card = new int[Size][Size];
        for (int i=0;i<Size;i++){
            for (int j=0;j<Size;j++){
                card[i][j] = sc.nextInt();
            }
        }
        int n = sc.nextInt();
        for (int i=0;i<n;i++){
            int b = sc.nextInt();
            mark(card, b, Size);
        }
        // System.out.println(Arrays.deepToString(card));
        if (check(card, Size)){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }

    }
}