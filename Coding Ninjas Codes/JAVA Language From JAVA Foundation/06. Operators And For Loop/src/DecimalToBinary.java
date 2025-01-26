import java.util.Scanner;

public class DecimalToBinary {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();
        sc.close();
        int res = 0;
        int i = 0;
        while (num != 0) {
            int last = num & 1;
            double power = Math.pow(10, i);
            res = last * (int) power + res;
            num = num >> 1;
            i++;
        }
        System.out.print(res);
    }
}
