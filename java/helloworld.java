//package java;
import java.util.Scanner;

 class helloworld
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the person name");
        String s;
        int m;
        s = sc.next();
        m=sc.nextInt();
        System.out.println("the value of s is "+s);
    }

    public helloworld() {
    }
}