import java.util.Scanner;

public class TripletSum {
    static int Triple(int arr[], int target) {
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                for (int k = j + 1; k < arr.length; k++)
                    if (arr[i] + arr[j] + arr[k] == target)
                        count++;
            }
        }
        return count;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array : ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter array elements :-");
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        System.out.print("Enter the target : ");
        int target = sc.nextInt();
        sc.close();
        System.out.print(Triple(arr, target));
    }
}
