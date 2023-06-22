import java.util.*;
class Hamiltonian
{
    private int n,g[][],x[];
    public static Scanner sc = new Scanner(System.in);
    public Hamiltonian()
    {
        n =sc.nextInt();
        g = new int[n+1][n+1];
        x = new int[n+1];
        for(int i=0;i<n+1;i++)
            x[i]=0;
    }
 
    public void solve()
    {
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<n+1;j++)
            {
                g[i][j]= sc.nextInt();
            }
        }
        x[1]=1;
        hamilt(2);
    }
 
    public void hamilt(int k)
    {
       // System.out.println(k);
        while(true)
        {
            nextvertex(k);
            if(x[k]==0)
                return;
            else if (k == n)
            {
                for(int i=1;i<n+1;i++)
                    System.out.println(x[i]+" ");
                System.out.println();
            }
            else 
                hamilt(k+1);
        }
    }
 
    public void nextvertex(int k)
    {
        int j;
        do
        {
            x[k]= (x[k]+1)%(n+1);
 
            if(x[k]==0)
                return;
            if(g[x[k-1]][x[k]] == 1)
            {
                for(j=1;j<=k-1;j++)
                    if(x[j] == x[k])
                        break;
                if(j == k)
                {
                    if(k<n || (k == n && g[x[n]][x[1]] == 1))
                        return;
                }
            }
        }while(true);
    }
 
    public static void main(String[] args)
    {
        Hamiltonian a = new Hamiltonian();
        a.solve();
        // a.hamilt(2);
    }
}