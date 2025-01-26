import java.util.Scanner;

public class ReverseEachWord {
    static String Reverse(String a, int start, int end) {
        String Reverse = "";
        while (start < end) {
            Reverse = a.charAt(start) + Reverse;
            ++start;
        }
        return Reverse;
    }

    static String ReverseWord(String s) {
        int n = s.length();
        String ans = "";
        int PrevIdx = -1;
        int i = 0;
        for (; i < n; i++) {
            if (s.charAt(i) == ' ') {
                ans += (Reverse(s, PrevIdx + 1, i) + " ");
                PrevIdx = i;
            }
        }
        ans += (Reverse(s, PrevIdx + 1, i) + " ");
        return ans;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        sc.close();

        System.out.print(ReverseWord(s));
    }
}
