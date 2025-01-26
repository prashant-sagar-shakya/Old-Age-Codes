import java.util.Scanner;

public class NthFibonacciNumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();
        sc.close();
        int n1 = 0, n2 = 1, nt = 0;
        for (int i = 1; i < num; i++) {
            n1 = n2;
            n2 = nt;
            nt = n1 + n2;
        }
        System.out.print(num + "th Fibonacci Number is " + nt);
    }
}