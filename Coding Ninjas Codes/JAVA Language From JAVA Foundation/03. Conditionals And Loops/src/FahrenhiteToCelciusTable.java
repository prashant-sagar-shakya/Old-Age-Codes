import java.util.Scanner;

public class FahrenhiteToCelciusTable {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int S = sc.nextInt(); // Starting Point
        int E = sc.nextInt();// Endind Point
        int W = sc.nextInt(); // Step Difference
        while (S <= E) {
            int cel = (S - 32) * 5 / 9;
            System.out.println(S + "\t" + cel);
            S += W;
        }
        sc.close();
    }
}
