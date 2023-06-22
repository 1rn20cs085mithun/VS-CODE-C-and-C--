package OOCDAA;
import java.util.*;
 class std {
    String name,branch,usn;
    long ph;
    void read()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the name");
        name=sc.next();
        System.out.println("enter the usn");
        usn=sc.next();
        System.out.println("enter the branch");
        branch=sc.next();
        System.out.println("enter the phone no.");
        ph=sc.nextInt();
        sc.close();
    }
    void display()
    {
        System.out.println("name"+name);
        System.out.println("usn"+usn);
        System.out.println("branch"+branch);
        System.out.println("ph"+ph);
    }
}

class stud{
    public static void main(String args[])
    {
        Scanner sn = new Scanner(System.in);
        System.out.println("enter the no. of students");
        int n;
        n= sn.nextInt();
        std s[]=new std[n];
        for(int i=0;i<n;i++)
        {
            s[i]=new std();
            s[i].read();
        }
        for(int i=0;i<n;i++)
        {
           // s[i]=new std();
            s[i].display();
        }
        sn.close();
    }
}
