package OOCDAA;

import java.util.*;
public class quicksort {
    static int a[];
    public static Scanner sc = new Scanner(System.in);
    public static void main(String args[])
    {
        int n;
        Random ran=new Random();
        long start,stop;
        System.out.println("enter the no.of elem");
        n=sc.nextInt();
        a=new int[n];
        System.out.println("1.bs\n2.avg\n3.ws\nenter the choice\n");
        int ch =sc.nextInt();
        switch(ch)
        {
            case 1 : System.out.println("bs");
                    for(int i=0;i<n;i++)
                    {
                        a[i]=ran.nextInt();
                    }
                    break;
            case 2 : System.out.println("avg");
                        for(int i=0;i<n;i++)
                        {
                            a[i]=ran.nextInt();
                        }
                        break;
            case 3 : System.out.println("ws");
                     for(int i=0;i<n;i++)
                     {
                        a[i]=i;
                     }
                     break;
        }
        start = System.nanoTime();
        qsort(0,n-1);
        stop =  System.nanoTime();
        System.out.println(stop-start);
    }
    static void qsort(int low,int high)
    {
        if(low<high)
        {
            int j= partition(low,high);
            qsort(low,j-1);
            qsort(j+1,high);
        }
    }
    static int partition(int low ,int high)
    {
        int pivot=a[low],i=low,j=high;
        while(i<j)
        {
            while(i<high && a[i]<=pivot)
                i++;
            while(j>low && a[j]>=pivot)
                j--;
            if(i<j)
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            int temp=a[low];
            a[low]=a[j];
            a[j]=temp;
        }
        return j;
    }
}
