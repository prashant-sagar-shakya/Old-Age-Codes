import java.util.Scanner;

public class SumOrProduct {
    static int Sum(int n) {
        return n * (n + 1) / 2;
    }

    static int Product(int n) {
        int res = 1;
        for (int i = 1; i <= n; i++)
            res *= i;
        return res;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = sc.nextInt();
        System.out.print("Enter your choice : ");
        int c = sc.nextInt();
        if (c == 1)
            System.out.print("Sum is " + Sum(n));
        else if (c == 2)
            System.out.print("Product is " + Product(n));
        else
            System.out.print(-1);
        sc.close();
    }
}
