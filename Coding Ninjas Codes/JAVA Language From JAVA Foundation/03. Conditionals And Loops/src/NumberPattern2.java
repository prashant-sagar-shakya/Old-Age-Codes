import java.util.Scanner;

public class NumberPattern2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();
        for (int i = 1; i <= num; i++) {
            for (int k = num - i; k >= 1; k--)
                System.out.print(" ");
            for (int j = 0; j < i; j++)
                System.out.print(j + i);
            System.out.println();
        }
        sc.close();
    }
}