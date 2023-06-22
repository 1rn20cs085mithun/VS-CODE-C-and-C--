#include<stdio.h>

struct polynomial
{
	int cf,px;
};
typedef struct polynomial P;

void accept(P*p,int n)
{
	int i;
	printf("enter the cf and px of the polynomial\n");
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&(p[i].cf),&(p[i].px));
	}
}

void display(P*p, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(p[i].cf>0)
		{
			printf("+%dX^%d",p[i].cf,p[i].px);
		}
		else
		{
			printf("%dX^%d",p[i].cf,p[i].px);
		}
	}
	printf("\n");
}

int addition(P*p1,int n1,P*p2,int n2,P*res)	
{
	int i,j,k=0;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(p1[i].px==p2[j].px)
			{
				res[k].px=p1[i].px;
				res[k].cf=p1[i].cf+p2[j].cf;
				p2[j].cf=-999;
				k++;
				break;
			}
		}
	}
	if(j==n2)
	{
		res[k].px=p1[i].px;
		res[k].cf=p1[i].cf;
	        k++;
	}
	for(i=0;i<n2;i++)
	{
		if(p2[i].cf!=-999)
		{
			res[k].cf=p2[i].cf;
			res[k].px=p2[i].px;
			k++;
		}
	}
	return k;
}

int main()
{
	P p1[10],p2[10],res[10];
	int n1,n2,k;
	printf("enter the no. of terms in polynomial 1 and 2\n");
	scanf("%d%d",&n1,&n2);
	accept(p1,n1);
	accept(p2,n2);
	display(p1,n1);
	display(p2,n2);
	k=addition(p1,n1,p2,n2,res);
	display(res,k);
	return 0;
}
			
