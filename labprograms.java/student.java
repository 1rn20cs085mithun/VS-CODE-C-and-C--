//import java.nio.channels.AcceptPendingException;
import java.util.*;
public class student {
    private String usn,name,pgm;
    private int ph;
    private static Scanner sc;

    public static void init_sc()
    {
        sc=new Scanner(System.in);
    }

    public void accept()
    {
        System.out.println("enter the usn");
        usn=sc.next();
        System.out.println("enter the name");
        name = sc.next();
        System.out.println("enter the program");
        pgm=sc.next();
        System.out.println("enter the phone no");
        ph=sc.nextInt();
    }

    public void display()
    {
        System.out.println("usn : "+usn);
        System.out.println("name :"+name);
        System.out.println("programme : "+pgm);
        System.out.println("phone number : "+ph);
    }

    public static void main(String args[])
    {
        student a[];
        student.init_sc();
        System.out.println("enetr the number of students");
        int n=sc.nextInt();
        a=new student[n];
        for(int i=0;i<a.length;i++)
        {
            a[i]=new student();
            a[i].accept();
        }
        for(int i=0;i<a.length;i++)
        {
           // a[i]=new student();
            a[i].display();
        }
    }

    
    
}
