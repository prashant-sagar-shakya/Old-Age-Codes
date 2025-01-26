import java.util.Scanner;

public class CheckNumberSequence {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int prev = sc.nextInt(), curr, count = 2;
        boolean dec = true;
        while (count <= n) {
            curr = sc.nextInt();
            count++;
            if (prev == curr) {
                System.out.print("False");
                return;
            }
            if (curr < prev) {
                if (dec = false) {
                    System.out.print("False");
                    return;
                }
            } else {
                if (dec == true) {
                    dec = false;
                }
            }
            prev = curr;
        }
        sc.close();
        System.out.print("True");
    }
}