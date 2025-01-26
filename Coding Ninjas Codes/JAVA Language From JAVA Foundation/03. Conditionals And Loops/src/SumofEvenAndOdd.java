import java.util.Scanner;

public class SumofEvenAndOdd {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number  : ");
        int num = sc.nextInt();
        int even = 0, odd = 0;
        while (num != 0) {
            int last = num % 10;
            num = num / 10;
            if (last % 2 == 0)
                even = even + last;
            else
                odd = odd + last;
        }
        System.out.println("Eum of even Digits = " + even);
        System.out.print("Eum of odd Digits = " + odd);
        sc.close();
    }
}
