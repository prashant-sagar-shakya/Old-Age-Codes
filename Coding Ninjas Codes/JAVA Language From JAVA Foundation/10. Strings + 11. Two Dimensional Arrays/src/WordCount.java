import java.util.Scanner;

public class WordCount {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        sc.close();
        int count = 1;
        for (int i = 0; i < a.length(); i++) {
            if (i == '\0')
                count++;
        }
        System.out.print(count);
    }
}
