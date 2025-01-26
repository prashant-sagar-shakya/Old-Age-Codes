import java.util.*;

public class CheckPermutation {
    static boolean Anagram(String s1, String s2) {
        if (s1.length() != s2.length())
            return false;
        char c1[] = s1.toCharArray();
        char c2[] = s2.toCharArray();
        Arrays.sort(c1);
        Arrays.sort(c2);
        for (int i = 0; i < c1.length; i++) {
            if (c1[i] != c2[i])
                return false;
        }
        return true;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.next();
        String s2 = sc.next();
        sc.close();
        System.out.print(Anagram(s1, s2));
    }
}
