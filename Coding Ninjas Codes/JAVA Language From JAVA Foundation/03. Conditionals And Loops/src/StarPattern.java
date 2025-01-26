import java.util.Scanner;

public class StarPattern {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();
        for (int i = 1; i <= num; i++) {
            for (int k = num - i; k >= 1; k--)
                System.out.print(" ");
            for (int j = 0; j < (i * 2) - 1; j++)
                System.out.print("*");
            System.out.println();
        }
        sc.close();
    }
}