import java.util.Scanner;

public class Sort01 {
    public static void Sort(int arr[]) {
        int count = 0;
        for (int i = 0; i < arr.length; i++)
            if (arr[i] == 0)
                count++;

        for (int i = 0; i < count; i++)
            arr[i] = 0;
        for (int i = count; i < arr.length; i++)
            arr[i] = 1;
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
        for (int i = 0; i < n; i++)
            System.out.print(arr[i] + " ");
    }
}
