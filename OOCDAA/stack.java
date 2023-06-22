package OOCDAA;
import java.util.*;
 class stk {
    Scanner sc=new Scanner(System.in);
    int s[],top,size;
    stk(int n)
    {
        size =n;
        top =-1;
        s = new int[n];
    }
    void push()
    {
        if(top==size-1)
        {
            System.out.println("OVERFLOW");
        }
        else{
            System.out.println("enter the elem to be pushed\n");
            int elem=sc.nextInt();
            s[++top]=elem;
        }
    }
    int pop()
    {
        if(top==-1)
        {
           
            return -1;
        }
        else
        {
            return s[top--];
        }
    }
    void display()
    {
        if(top==-1)
        {
            System.out.println("no elem");
        }
        for(int i=top;i>=top;i--)
        {
            System.out.println(s[i]);
        }
    }   
}

class stack{
   
    public static void main(String [] args)
    {
        Scanner sc = new Scanner(System.in);   
        System.out.println("enetr the no. of elements");
        int n =sc.nextInt();
        stk stkob = new stk(n);
        int choice;
        do{
            System.out.println("1.push\n2.pop\n3.display\n4.exit\nenter the choice\n");
            choice = sc.nextInt();
            switch(choice)
            {
                case 1 : stkob.push();
                            break;
                case 2 : int popped = stkob.pop();
                            if(popped ==-1)
                            {
                                System.out.println("UNDERFLOW");
                            }
                            else
                            {
                                System.out.println("the popped elem is "+popped);
                            }
                case 3 : stkob.display();
                            break;
                default :  System.out.println("go away!!!");
            }
        }while(choice!=4);
        sc.close();
    }
}

