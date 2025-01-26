import java.util.Scanner;

public class ArrayIntersection {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of array1 : ");
        int n1 = sc.nextInt();
        int arr1[] = new int[n1];
        System.out.println("Enter array elements :- ");
        for (int i = 0; i < n1; i++)
            arr1[i] = sc.nextInt();

        System.out.print("Enter the size of array2 : ");
        int n2 = sc.nextInt();
        int arr2[] = new int[n2];
        System.out.println("Enter array elements :- ");
        for (int i = 0; i < n2; i++)
            arr2[i] = sc.nextInt();

        sc.close();
        System.out.println("Intersection is :- ");
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (arr1[i] == arr2[j])
                    System.out.print(arr1[i] + " ");
            }
        }
    }
}
