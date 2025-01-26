import java.util.Scanner;

public class TotalSalary {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Basic Salary : ");
        int basic = sc.nextInt();
        System.out.print("Enter Grade : ");
        char grade = sc.next().charAt(0);
        int hra = (20 * basic) / 100;
        int da = (50 * basic) / 100;
        int pf = (11 * basic) / 100;
        int allow;
        if (grade == 'A')
            allow = 1700;
        else if (grade == 'B')
            allow = 1500;
        else
            allow = 1300;
        int total = basic + hra + da + allow - pf;
        System.out.println("Total Salary is " + total);
        sc.close();
    }
}