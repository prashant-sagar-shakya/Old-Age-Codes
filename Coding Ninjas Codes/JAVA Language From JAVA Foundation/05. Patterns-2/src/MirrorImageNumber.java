import java.util.Scanner;

public class MirrorImageNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();
        sc.close();
        for (int i = 1; i <= num; i++) {
            for (int k = num; k >= i; k--)
                System.out.print(" ");
            for (int j = 1; j <= i; j++)
                System.out.print(j);
            System.out.println();
        }
    }
}
