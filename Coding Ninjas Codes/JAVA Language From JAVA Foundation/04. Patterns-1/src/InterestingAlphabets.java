import java.util.Scanner;

public class InterestingAlphabets {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();
        for (int i = 1; i <= num; i++) {
            for (int j = 0; j < i; j++)
                System.out.print((char) (65 + num - i + j));
            System.out.println();
        }
        sc.close();
    }
}
