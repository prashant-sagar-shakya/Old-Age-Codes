import java.util.Scanner;

public class RemoveCharacter {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        char x = sc.next().charAt(0);
        sc.close();
        String ans = "";
        for (int i = 0; i < a.length(); i++) {
            if (a.charAt(i) != x)
                ans += a.charAt(i);
        }
        System.out.print(ans);
    }
}
