import java.util.Scanner;

public class LinearSearch {
    static int Linear(int arr[], int x) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == x)
                return i;
        }
        return -1;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array : ");
        int n = sc.nextInt();
        System.out.println("Enter array elements :- ");
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.print("Enter element to be searched : ");
        int x = sc.nextInt();
        System.out.print("Element is found at index " + Linear(arr, x));
        sc.close();
    }
}
