import java.util.Scanner;

public class Sort012 {
    static void Sort(int arr[]) {
        int low = 0, mid = 0, high = arr.length - 1;
        while (mid <= high) {
            if (arr[mid] == 0) {
                {
                    int temp = arr[mid];
                    arr[mid] = arr[low];
                    arr[low] = temp;
                }
                mid++;
                low++;
            } else if (arr[mid] == 1)
                mid++;
            else if (arr[mid] == 2) {
                {
                    int temp = arr[mid];
                    arr[mid] = arr[high];
                    arr[high] = temp;
                }
                high--;
            }
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
        Sort(arr);
        for (int i : arr) {
            System.out.print(i + " ");
        }
    }
}
