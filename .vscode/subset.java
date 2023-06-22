import java.util.*;
class subset
{
    private int set[],n,target,tot_sum,solvector[];
    public static Scanner sc = new Scanner(System.in);
    public subset()
    {
        n = sc.nextInt();
        target = sc.nextInt();
        set = new int[n];
        solvector = new int[n];
        tot_sum =  0;
    }
    public void solve()
    {
        for(int i =0;i<n;i++)
        {
            set[i]= sc.nextInt();
            tot_sum+=set[i];
        }
        if(target>tot_sum)
        {
            System.out.println("No Solution");
           // System.exit(1);
           return;
        }
        sub(0,0,tot_sum);
        System.out.println();
    }
 
    public void sub(int sumsofar,int index,int remsum)
    {
        solvector[index]=1;
        if(sumsofar + set[index] == target)
        {
            System.out.println("\nThe Solution");
            for(int i=0; i<=index;i++)
            {
                if(solvector[i] != 0)
                {
                    System.out.println(set[i]+" ");
                }
               // System.out.println();
            }
        }
        if((sumsofar + set[index] +set[index] ) <= target)
            sub(sumsofar+set[index],index+1,remsum-set[index]);
        if (((sumsofar+(remsum-set[index]))>= target) && (sumsofar+set[index+1] <= target ))
        {
            solvector[index]=0;
            sub(sumsofar,index+1,remsum-set[index]);
        }
    }
    public static void main(String[] args)
    {
        subset a = new subset();
        a.solve();
    }
}