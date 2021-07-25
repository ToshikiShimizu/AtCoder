import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double sx = sc.nextDouble();
        double sy = sc.nextDouble();
        double gx = sc.nextDouble();
        double gy = sc.nextDouble();
        double slope = ( gy + sy ) / ( gx - sx );
        System.out.println(sy / slope + sx);
    }
}