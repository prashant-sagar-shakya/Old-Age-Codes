import java.util.Scanner;

public class DiamondofStars {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();
        // Star
        for (int i = 1; i <= (num / 2) + 1; i++) {
            for (int k = (num / 2) + 1 - i; k >= 1; k--)
                System.out.print(" ");
            for (int j = 0; j < (i * 2) - 1; j++)
                System.out.print("*");
            System.out.println();
        }
        // Inverted Star
        for (int i = num / 2; i >= 1; i--) {
            for (int k = (num / 2) + 1 - i; k >= 1; k--)
                System.out.print(" ");
            for (int j = 0; j < (i * 2) - 1; j++)
                System.out.print("*");
            System.out.println();
            sc.close();
        }
    }
}