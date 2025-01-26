import java.util.Scanner;

public class ReverseAString {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        sc.close();
        StringBuffer buffer = new StringBuffer(a);
        buffer.reverse();
        System.out.print(buffer.toString());
    }
}
