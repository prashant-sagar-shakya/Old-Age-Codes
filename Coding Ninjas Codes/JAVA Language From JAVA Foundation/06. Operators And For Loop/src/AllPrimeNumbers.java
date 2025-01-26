import java.util.Scanner;

public class AllPrimeNumbers {
    // Check Prime Function
    static boolean CheckPrime(int n) {
        if (n < 1)
            return false;
        else if (n == 2 || n == 3)
            return true;
        else if (n % 2 == 0 || n % 3 == 0)
            return false;
        for (int i = 5; i * i <= n; i++) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();
        sc.close();
        for (int i = 2; i <= num; i++) {
            if (CheckPrime(i) == true)
                System.out.println(i);
        }
    }
}
