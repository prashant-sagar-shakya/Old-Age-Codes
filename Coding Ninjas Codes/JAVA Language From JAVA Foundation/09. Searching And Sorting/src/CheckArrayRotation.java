import java.util.Scanner;

public class CheckArrayRotation {
    static int CheckRotate(int arr[]) {
        for (int i = 0; i < arr.length - 1; i++) {
            if (arr[i + 1] < arr[i])
                return i + 1;
        }
        return -1;
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
        System.out.print(CheckRotate(arr));
    }
}
