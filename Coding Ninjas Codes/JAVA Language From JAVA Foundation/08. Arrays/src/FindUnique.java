import java.util.Scanner;

public class FindUnique {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array : ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter array elements :- ");
        for (int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        sc.close();
        int i, j;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (arr[i] == arr[j] && i != j)
                    break;
            }
            if (j == n)
                System.out.print("Unique element is " + arr[i]);
        }
    }
}
