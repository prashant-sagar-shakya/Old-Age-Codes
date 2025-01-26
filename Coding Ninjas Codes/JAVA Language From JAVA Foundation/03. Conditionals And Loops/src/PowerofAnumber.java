import java.util.Scanner;

public class PowerofAnumber {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();
        System.out.print("Enter the power : ");
        int pow = sc.nextInt();
        sc.close();
        int res = 1;
        if (pow == 0) {
            System.out.print(res);
            return;
        }
        while (pow != 0) {
            res = res * num;
            pow--;
        }
        System.out.print("Result is " + res);
    }
}
