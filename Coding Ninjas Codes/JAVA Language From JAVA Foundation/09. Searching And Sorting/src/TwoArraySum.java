import java.util.Scanner;

public class TwoArraySum {
    static void SumofTwo(int arr1[], int arr2[]) {
        int n1 = arr1.length, n2 = arr2.length;
        int Sum[] = new int[n1 > n2 ? n1 : n2];
        int carry = 0;
        int i = n1 - 1, j = n2 - 1, k = Sum.length - 1;
        while (k >= 0) {
            int d = carry;
            if (i >= 0)
                d += arr1[i];
            if (j >= 0)
                d += arr2[j];
            carry = d / 10;
            d = d % 10;
            Sum[k] = d;
            i--;
            j--;
            k--;
        }
        if (carry != 0)
            System.out.print(carry + " ");
        for (int l = 0; l < Sum.length; l++)
            System.out.print(Sum[l] + " ");
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
        SumofTwo(arr1, arr2);
    }
}
