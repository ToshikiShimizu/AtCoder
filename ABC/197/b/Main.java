import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt();
        int w = sc.nextInt();
        int x = sc.nextInt();
        int y = sc.nextInt();
        char[][] grid = new char[h][w];
        for (int i=0; i<h; i++){
            String s = sc.next();
            // for (int j=0; j<w; j++){
            //     grid[i][j] = s.charAt(j);
            //}
            grid[i] = s.toCharArray();
        }
        int ans = 1;


        int[][] delta = {{1,0}, {-1,0},{0,1}, {0,-1}};
        for (int k=0; k<4; k++){
            int i = x-1;
            int j = y-1;
            while(true){
                i += delta[k][0];
                j += delta[k][1];

                if (i<0 || i>=h || j<0 || j>=w){
                    break;
                }
                if (grid[i][j] == '.'){
                    ans++;
                }else{
                    break;
                }
            }
        }

        System.out.println(ans);
    }
}