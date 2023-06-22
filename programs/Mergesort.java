package programs;
import java.util.*;
public class Mergesort {
    public static Scanner sc = new Scanner(System.in);
    public static void main(String args[])
    {
        int n;
        long start,stop;
        Random ran =new Random();
        System.out.println("enter the number of items");
        n=sc.nextInt();
        int []a=new int[n];
       // do{
            System.out.println("1.bs\n2.avg\n3.ws\n4.exit\nenter\nenter the choice");
            int ch=sc.nextInt();
            switch(ch)
            {
                case 1 : System.out.println("bs\n");
                         for(int i =0;i<n;i++)
                         {
                            a[i]=i;
                         }
                         break;
                case 2 : System.out.println("avg\n");
                         for(int i=0;i<n;i++)
                         {
                            a[i]=ran.nextInt(n);
                         }
                         break;
                case 3 : System.out.println("ws\n");
                            for(int i =0;i<n;i++)
                            {
                                 a[i]=n-i;
                            }
                            break;
                case 4 : System.out.println("go away\n");
                            break;
            }
        //}while(true);

        start = System.nanoTime();
        mergesort(a,0,n-1);
        stop = System.nanoTime();
        System.out.println(stop-start);
    }
    public static void mergesort(int []a,int low,int high)
    {
        int mid;
        if(low<high)
        {
            mid=(low +high)/2;
            mergesort(a,low,mid);
            mergesort(a,mid+1,high);
            merge(a,low,mid,high);
        }
    }
    public static void  merge(int []a,int low,int mid,int high)
    {
            int i=low,h=low,j=mid+1,k;
            int []b =new int[a.length];
            while(h<=mid && j<=high)
            {
                if(a[h]<=a[j])
                {
                    b[i]=a[h];
                    h++;
                }
                else{
                    b[i]=a[j];
                    j++;
                }
                i++;
            }
            if(h>mid){
             for(k=j;k<=high;k++)   
             {
                 b[i]=a[j];
                 j++;i++;
             }
            }
            else{
                for(k=h;k<=mid;k++)   
             {
                 b[i]=a[h];
                 h++;i++;
             }
            }
            for( k=0;k<i;k++)
            {
                a[k]=b[k];
            }
    }
}
