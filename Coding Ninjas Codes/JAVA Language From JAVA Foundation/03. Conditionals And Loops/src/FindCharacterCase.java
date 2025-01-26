import java.util.Scanner;

public class FindCharacterCase {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a character : ");
        char ch = sc.next().charAt(0);
        if (ch >= 'A' && ch <= 'Z')
            System.out.println(1);
        else if (ch >= 'z' && ch <= 'z')
            System.out.println(0);
        else
            System.out.println(-1);
        sc.close();
    }
}
