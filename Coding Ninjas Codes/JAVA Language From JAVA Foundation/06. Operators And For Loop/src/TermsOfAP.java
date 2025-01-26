import java.util.Scanner;

public class TermsOfAP {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = sc.nextInt();
        sc.close();
        for (int i = 1; i <= n; i++) {
            if ((3 * i + 2) % 4 == 0) {
                n++;
                continue;
            }
            System.out.print(3 * i + 2 + " ");
        }
    }
}
