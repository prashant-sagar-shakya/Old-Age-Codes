import java.util.Scanner;

public class PushZerosToEnd {
    static void Push(int arr[]) {
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] != 0) {
                System.out.print(arr[i] + " ");
                count++;
            }
        }
        while (count < arr.length) {
            System.out.print(0 + " ");
            count++;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array : ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter array elements :-");
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        sc.close();
        Push(arr);
    }
}
