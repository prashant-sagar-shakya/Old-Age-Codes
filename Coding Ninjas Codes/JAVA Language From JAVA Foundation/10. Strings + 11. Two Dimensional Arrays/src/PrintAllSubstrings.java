import java.util.Scanner;

public class PrintAllSubstrings {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        int n = s.length();
        sc.close();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                for (int k = i; k <= j; k++) {
                    System.out.print(s.charAt(k));
                }
                System.out.println();
            }
        }
    }
}
