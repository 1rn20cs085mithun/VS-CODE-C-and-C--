#include<stdio.h>
struct polynomial
{
	int cf;
	int px;
};
typedef struct polynomial P;
void display(P p1[20],int n);
void accept(P p1[20],int n);
int add(P p1[20],int n1,P p2[20],int n2,P res[20]);
int main()
{
	P p1[20],res[20];
	int n1=2,n3=0,k;
	accept(p1,n1);
	display(p1,n1);
	P p2[20];
	int n2=3;
	accept(p2
	,n2);
	display(p2,n2);
	k=add(p1,n1,p2,n2,res);
	display(res,k);
}
void accept(P p1[20],int n1)
{
	int i;
	printf("Enter cf and px\n");
	for(i=0;i<n1;i++)
	scanf("%d %d",&p1[i].cf,&p1[i].px);
}
void display(P p1[20],int n1)
{
	printf("Polynomial with cf and px\n");
	for(int i=0;i<n1;i++)
	{
		if(p1[i].cf>0)
		{
			printf("+%dx^%d",p1[i].cf,p1[i].px);
		}
		else
		{
			printf("%dx^%d",p1[i].cf,p1[i].px);
		}
	}
	printf("\n");
}
int add(P p1[20],int n1,P p2[20],int n2,P res[20])
{
    int i,j,k=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(p1[i].px==p2[j].px)
            {
                res[k].cf=p1[i].cf+p2[j].cf;
                res[k].px=p1[i].px;
                k++;
                p2[j].cf=-999;
                break;
            }
        }
        if(j==n2-1)
        {
            res[k].cf=p1[i].cf;
            res[k].px=p1[i].px;
            k++;
        }
    }
    for(j=0;j<n2;j++)
    {
        if(p2[j].cf!=-999)
        {
            res[k].cf=p2[j].cf;
            res[k].px=p2[j].px;
            k++;
        }
    }
        return k;
        
   // return 0;
}