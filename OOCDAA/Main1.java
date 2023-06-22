package OOCDAA;
import java.util.*;
public class Main1 {
    String name,dob;
    public static Scanner sc = new Scanner(System.in);
    public void accept()
    {
        System.out.println("enter name\n");
        name = sc.nextLine();
        System.out.println("enter dob in dd/mm/yyyy form\n");
        dob= sc.nextLine();
    }
    public void display()
    {
        System.out.println(" name and\n");
        StringTokenizer st = new  StringTokenizer(dob,"/");
        System.out.println(" dob is :" +"<"+name+",");
        int n = st.countTokens();
        while(st.hasMoreTokens())
        {
            if(n>1)
            {
                System.out.println(st.nextToken("/")+",");
            }
            else
            {
                System.out.println(st.nextToken("/")+">");
            }
        }
    }
    public static void main(String args[])
    {
        Main1 ob = new Main1();
        ob.accept();
        ob.display();
    }
    
}
