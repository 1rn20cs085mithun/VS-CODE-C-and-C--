public class p1
{
    public static void main(String [] args)
    {
        String add = "blr ,india";
        if(add.endsWith("india"))
        {
            if(add.contains("meerut"))
            {
                System.out.println("meerut is the city");
            }
            else if(add.contains("delhi"))
            {
                System.out.println("delhi is present");
            }
            else 
            {
                System.out.println("the given city is "+add.split(",")[0]);
            }
        }
        else
        {
            System.out.println("you are not living in india ");
        }
    }
}

