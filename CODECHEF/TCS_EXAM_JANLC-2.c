#include<stdio.h>

int main()
{
    int t,ds1,ds2,toc1,toc2,dm1,dm2,dr,sl;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&ds1,&toc1,&dm1);
        scanf("%d%d%d",&ds2,&toc2,&dm2);
        dr=ds1+toc1+dm1;
        sl=ds2+toc2+dm2;
        if(dr>sl)
        {
            printf("DRAGON\n");
        }
        else if(sl>dr)
        {
            printf("SLOTH\n");
        }
        else
        {
          if(ds1>ds2)
          {
               printf("DRAGON\n");
          }
          else if(ds1<ds2)
          {
              printf("SLOTH\n");
          }
          else
          {
              if(toc1>toc2)
              {
                  printf("DRAGON\n");   
              }
              else if(toc2>toc1)
              {
                  printf("SLOTH\n"); 
              }
              else 
              printf("TIE\n");
          }
        }
    }
    return 0;
}