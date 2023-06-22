//polynomial addition with csll/
#include<stdio.h>
#include<stdlib.h>
struct poly
{
    int cf;
    int px;
    int py;
    int pz;
    struct poly*link;
};
typedef struct poly*P;
P getnode()
{
    P x;
    x=(P)malloc(sizeof(struct poly));
    if(x==NULL)
    {
        printf("Memory not available\n");
        exit(0);
    }
    return x;
}
void read_poly(P p1,int n)
{
    P temp,next;
    int i;
    for(i=0;i<n;i++)
    {
        temp=getnode();
        printf("Enter the cf px py pz\n");
        scanf("%d%d%d%d",&(temp->cf),&(temp->px),&(temp->py),&(temp->pz));
        next=p1->link;
        p1->link=temp;
        temp->link=next;
    }
}
void display(P p1)
{
    P cur;
     cur=p1->link;
    printf("\nElem of polynomial are:\n");
  // printf("no\n");
    while(cur!=p1)
    {
        //printf("yes");
        if(cur->cf>0)
        {
            printf("+%dx^%dy^%dz^%d",cur->cf,cur->px,cur->py,cur->pz);
        }
        else
        {
            printf("%dx^%dy^%dz^%d",cur->cf,cur->px,cur->py,cur->pz);
        }
        cur=cur->link;
    }
}
P compare(P term,P p2)
{
    P cur;
    cur=p2->link;
    while(cur!=p2)
    {
        if(cur->px==term->px&&cur->py==term->py&&cur->pz==term->pz)
        {
            return cur;
        }
        cur=cur->link;
    }
    return NULL;
}
void insert(P p3,int cf,int px,int py,int pz)
{
    P temp,next;
    temp=getnode();
    temp->cf=cf;
    temp->px=px;
    temp->py=py;
    temp->pz=pz;
    next=p3->link;
    p3->link=temp;
    temp->link=next;
}
void add_poly(P p1,P p2,P p3)
{
    P cur,res_pos;
    cur=p1->link;
    while(cur!=p1)
    {
        res_pos=compare(cur,p2);
        if(res_pos!=NULL)
        {
            insert(p3,cur->cf+res_pos->cf,cur->px,cur->py,cur->pz);
            res_pos->cf=-999;
        }
        else
        {
            insert(p3,cur->cf,cur->px,cur->py,cur->pz);
        }
        cur=cur->link;
    }
    cur=p2->link;
    while(cur!=p2)
    {
        if(cur->cf!=-999)
        {
            insert(p3,cur->cf,cur->px,cur->py,cur->pz);
        }
        cur=cur->link;
    }
}
int main()
{
    P p1=NULL;
    P p3=NULL;
    P p2=NULL;
    p3=getnode();
    p3->link=p3;
    int n,m;
    p1=getnode();
    p1->link=p1;
    printf("Enter the terms of poly p1:\n");
    scanf("%d",&n);
    read_poly(p1,n);
    display(p1);
    p2=getnode();
    p2->link=p2;
    printf("\nEnter the terms of poly p2:\n");
    scanf("%d",&m);
    read_poly(p2,m);
    display(p2);
    add_poly(p1,p2,p3);
    display(p3);
}