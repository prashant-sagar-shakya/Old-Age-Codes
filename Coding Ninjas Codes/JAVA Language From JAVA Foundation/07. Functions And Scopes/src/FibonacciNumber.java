import java.util.Scanner;

public class FibonacciNumber {
    static boolean Fibo(int n) {
        int a = 0, b = 1, c;
        while (a < n) {
            c = a + b;
            a = b;
            b = c;
        }
        if (a == n)
            return true;
        else
            return false;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = sc.nextInt();
        sc.close();
        System.out.println(Fibo(n));
    }
}
