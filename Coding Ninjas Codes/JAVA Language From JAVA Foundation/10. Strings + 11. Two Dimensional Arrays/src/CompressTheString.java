import java.util.Scanner;

public class CompressTheString {
    static String Compression(String str) {
        int n = str.length();
        String ans = "";
        int count = 1;
        ans += str.charAt(0);
        for (int i = 1; i < n; i++) {
            if (str.charAt(i) == str.charAt(i - 1))
                count++;
            else {
                if (count > 1) {
                    ans += count;
                    count = 1;
                }
                ans += str.charAt(i);
            }
        }
        if (count > 1)
            ans += count;
        return ans;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        sc.close();
        System.out.print(Compression(str));
    }
}
