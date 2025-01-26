import java.util.Scanner;

public class RemoveConsecutiveDuplicates {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        sc.close();
        String ans = "";
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (i < n - 1 && s.charAt(i) == s.charAt(i + 1))
                continue;
            else
                ans += s.charAt(i);
        }
        System.out.print(ans);
    }
}
