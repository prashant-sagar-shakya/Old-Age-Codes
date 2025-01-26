import java.util.Scanner;

public class CheckPalindrome {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        sc.close();
        StringBuffer buffer = new StringBuffer(a);
        buffer.reverse();
        String data = buffer.toString();
        if (a.equals(data))
            System.out.print("True");
        else
            System.out.print("False");
    }
}
