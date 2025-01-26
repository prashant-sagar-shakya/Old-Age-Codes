import java.util.Scanner;

public class SwapAlternate {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array : ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter array elements :- ");
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        sc.close();
        for (int i = 0; i < n - 1; i += 2) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        for (int i : arr)
            System.out.print(i + " ");
    }
}
