import java.util.Scanner;

public class NumberSequence {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of n : ");
        int n = sc.nextInt();
        sc.close();
        int arr[] = new int[n];
        int fill = 0;
        for (int i = 0; i <= n; i++) {
            if (i % 2 != 0) {
                arr[fill] = i;
                fill++;
            }
        }
        for (int i = n; fill < n; i--) {
            if (i % 2 == 0 && i != 0) {
                arr[fill] = i;
                fill++;
            }
        }
        for (int i : arr) {
            System.out.print(i + " ");
        }
    }
}
