package OOCDAA;
import java.util.*;
public class exept {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        try{
                
                int a,b;
                float res;
                System.out.println("value of a is :");
                a =sc.nextInt();
                System.out.println("value of b is :");
                b=sc.nextInt();
                res=a/b;
                System.out.println("res = "+res);
        }
        catch(ArithmeticException e)
        {
            System.out.println("divide by zero error"+e);
        }
        sc.close();
    }   
}
