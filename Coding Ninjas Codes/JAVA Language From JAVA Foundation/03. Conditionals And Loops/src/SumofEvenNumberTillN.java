import java.util.Scanner;

public class SumofEvenNumberTillN {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();
        int sum = 0;
        int i = 0;
        while (i <= num) {
            sum += i;
            i += 2;
        }
        System.out.print("Required sum is " + sum);
        sc.close();
    }
}
