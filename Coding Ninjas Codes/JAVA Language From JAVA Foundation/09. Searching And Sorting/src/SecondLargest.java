import java.util.Scanner;

public class SecondLargest {
    static int ScLargest(int arr[]) {
        int max = arr[0];
        int SecondLarge = Integer.MIN_VALUE;
        for (int i = 1; i < arr.length; i++) {
            if (max < arr[i]) {
                SecondLarge = max;
                max = arr[i];
            } else if (SecondLarge < arr[i] && arr[i] != max)
                SecondLarge = arr[i];
        }
        return SecondLarge;
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
        System.out.print("Second Largest element is " + ScLargest(arr));
    }
}
