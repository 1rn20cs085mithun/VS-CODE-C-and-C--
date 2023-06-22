import java.util.*;
class sales_man
{
    private int n,s[],c[][];
    public static Scanner sc = new Scanner(System.in);
    public sales_man()
    {
        n = sc.nextInt();
        s = new int[n+1];
        c = new int[n+1][n+1];
    }
    private void solve()
    {
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
                 c[i][j] = sc.nextInt(); s[i]=1;
        }
        int min = g(1,n-1,c,s);
        System.out.println("The Minimal Cost is :"+min);
    }
    private int g(int i,int s,int cost[][],int set[])
    {
        int min=10;
        int newset[] = new int[n+1];
        int select[] = new int[n+1];
        int j;
        for(j =1;j<n+1;j++)
            newset[j]=set[j];
        newset[i]=0;
        if(s == 0)
            return cost[i][1];
        int k;
        for( k = 0 ,j=1;k<s;j++)
        {
            if(newset[j] != 0)
            {
                select[k] = cost[i][j]+g(j,s-1,cost,newset);
                k++;
            }
        }
        min = select[0];
        for(j=0;j<k;j++)
        {
            if(select[j]<min)
                min = select[j];
        }
        return min;
    }
    public static void main(String[] args)
    {
        sales_man a = new sales_man();
        a.solve();
    }
}