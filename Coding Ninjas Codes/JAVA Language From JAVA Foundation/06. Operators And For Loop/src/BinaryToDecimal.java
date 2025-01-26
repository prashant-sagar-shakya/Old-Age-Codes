import java.util.Scanner;

public class BinaryToDecimal {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a binary number : ");
        int num = sc.nextInt();
        sc.close();
        int res = 0;
        int i = 0;
        while (num != 0) {
            int last = num % 10;
            num /= 10;
            double power = Math.pow(2, i);
            res = res + last * (int) power;
            i++;
        }
        System.out.print("Decimal value is " + res);
    }
}
