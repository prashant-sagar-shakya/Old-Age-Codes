import java.util.Scanner;

public class InsertionSort {
    static void Sort(int arr[]) {
        for (int i = 1; i < arr.length - 1; i++) {
            int curr = arr[i], j = i - 1;
            while (arr[j] > curr && j >= 0) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = curr;
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
        System.out.println("Sorted array is :- ");
        Sort(arr);
        for (int i : arr) {
            System.out.print(i + " ");
        }
    }
}
