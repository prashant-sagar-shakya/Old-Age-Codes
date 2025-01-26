import java.util.Scanner;

public class FahrenhiteToCelciusTable {
    static int Celcius(int n) {
        return (n - 32) * 5 / 9;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int S = sc.nextInt();
        int E = sc.nextInt();
        int W = sc.nextInt();
        sc.close();
        while (S <= E) {
            System.out.println(S + "\t" + Celcius(S));
            S += W;
        }
    }
}
