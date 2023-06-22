#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct dob
{
    int d,m,y;
};

struct person
{
    int eid;
    float es;
    struct dob d1;
};

void accept(struct person p1[10], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("enter the details of the person %d\n",i+1);
        printf("eid,es,d,m,y in respective order\n");
        scanf("%d%f%d%d%d",&(p1[i].eid),&(p1[i].es),&(p1[i].d1.d),&(p1[i].d1.m),&(p1[i].d1.y));
    }
}

void display(struct person p1[10], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("the person details of %d person\n",i+1);
        printf("%d\n%f\n%d\n%d\n%d\n",(p1[i].eid),(p1[i].es),(p1[i].d1.d),(p1[i].d1.m),(p1[i].d1.y));
    }
}
int main()
{
    struct person p1[10];
    int n;
    printf("enter the number of persons\n");
    scanf("%d",&n);
    accept(p1,n);
    display(p1,n);
    return 0;
}