import java.util.Scanner;

public class RotateArray {
    static void Rotate(int arr[], int x) {
        for (int i = x; i < arr.length; i++)
            System.out.print(arr[i] + " ");
        for (int i = 0; i < x; i++)
            System.out.print(arr[i] + " ");
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array : ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter array elements :-");
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        System.out.print("Enter index of rotation : ");
        int x = sc.nextInt();
        sc.close();
        Rotate(arr, x);
    }
}
