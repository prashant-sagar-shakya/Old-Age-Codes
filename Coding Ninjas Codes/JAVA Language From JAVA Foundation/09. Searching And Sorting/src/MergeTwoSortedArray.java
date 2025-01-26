import java.util.Scanner;

public class MergeTwoSortedArray {
    static int[] Merge(int arr1[], int arr2[]) {
        int ans[] = new int[arr1.length + arr2.length];
        int i = 0, j = 0, k = 0;
        while (i < arr1.length && j < arr2.length) {
            if (arr1[i] < arr2[j])
                ans[k++] = arr1[i++];
            else
                ans[k++] = arr2[j++];

        }
        while (i < arr1.length) {
            ans[k++] = arr1[i++];
        }
        while (j < arr2.length) {
            ans[k++] = arr2[j++];
        }
        return ans;
    }

    static void Print(int arr[]) {
        for (int i = 0; i < arr.length; i++)
            System.out.print(arr[i] + " ");
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array1 : ");
        int n1 = sc.nextInt();
        int arr1[] = new int[n1];
        System.out.println("Enter array elements :-");
        for (int i = 0; i < n1; i++)
            arr1[i] = sc.nextInt();

        System.out.print("Enter the size of array2 : ");
        int n2 = sc.nextInt();
        int arr2[] = new int[n2];
        System.out.println("Enter array elements :-");
        for (int i = 0; i < n2; i++)
            arr2[i] = sc.nextInt();
        sc.close();

        int ans[] = new int[n1 + n2];
        ans = Merge(arr1, arr2);
        System.out.println("Sorted array is :- ");
        Print(ans);
    }
}
