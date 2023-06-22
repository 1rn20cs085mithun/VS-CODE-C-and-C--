package OOCDAA;

import java.util.*;
class kruskals
{
    private int n,c[][];
    public static Scanner sc = new Scanner(System.in);
    public kruskals()
    {
        n = sc.nextInt();
        c = new int[n][n];
 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                c[i][j] = sc.nextInt();
        }
    }
    public void swap(int arr[],int i)
    {
        int temp = arr[i];
        arr[i] = arr[i-1];
        arr[i-1] = temp;
    }
 
    public int find(int parent[] , int i)
    {
        if(parent[i] == -1)
            return i;
        else
            return find(parent,parent[i]);
    }
 
    public void union(int parent[],int a,int b)
    {
        parent[a]=b;
    }
    public void solve()
    {
        int edges[] = new int[100];
        int dest[] = new int[100];
        int source[] = new int[100];
        int k=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(c[i][j] != 0 && c[i][j] != 999)
                {
                    edges[k]=c[i][j];
                    source[k]=i;
                    dest[k]=j;
                    c[j][i]=0;
                    k++;
                }
            }
        }
 
        for(int i=0;i<k-1;i++)
        {
            for(int j=i+1;j<k;j++)
            {
                if(edges[j]<edges[j-1])
                {
                    swap(edges,j);
                    swap(source,j);
                    swap(dest,j);
                }
            }
        }
        int parent[] = new int[n];
        for(int i=0;i<n;i++)
            parent[i]=-1;
        int min=0;
        for(int j=0;j<k;j++)
        {
            int a = find(parent,source[j]);
            int b = find(parent,dest[j]);
 
            if(a!=b)
            {
                min+=edges[j];
                union(parent,a,b);
                System.out.println("("+(source[j]+1)+" , "+(dest[j]+1)+"  "+(edges[j]));
            }
        }
        System.out.println("Min cost :"+min);
    }
    public static void main(String[] args)
    {
        kruskals a = new kruskals();
        a.solve();
    } 
}
