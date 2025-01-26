import java.util.Scanner;

public class TriangleofNumbers {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();
        for (int i = 0; i < num; i++) {
            for (int k = num - i; k >= 1; k--)
                System.out.print(" ");
            int n = 0;
            for (int j = 1; j <= i + 1; j++) {
                System.out.print(i + j);
                n = i + j;
            }
            for (int l = n - 1; l >= i + 1; l--)
                System.out.print(l);
            System.out.println();
        }
        sc.close();
    }
}