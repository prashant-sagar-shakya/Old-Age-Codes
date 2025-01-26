import java.util.Scanner;

public class ReverseANumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();
        sc.close();
        int res = 0;
        while (num != 0) {
            int last = num % 10;
            num /= 10;
            res = res * 10 + last;
        }
        System.out.print("Reverse of entered number is " + res);
    }
}
