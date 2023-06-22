#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int F[10];
int a[10][10];


void read_adj(int n)
{
    int i,j;
    printf("enter the adjacent matrix elements : ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}



void dfs(int u,int n)
{
    int v;
    F[u]=1;
    printf("%d\t",u);

    for(v=0;v<n;v++)
    {
        if(a[u][v]==1 && F[v]==0)
            dfs(v,n);
    }
}

void bfs(int u,int n)
{
    int rear=-1,front=0;
    int v,Q[10];

    printf("Nodes reachable from %d : ",u);
    Q[++rear]=u;
    F[u]=1;
    printf("%d\t",u);
    while(front<=rear)
    {
        u=Q[front++];
        for(v=0;v<n;v++)
        {
            if(a[u][v]==1 && F[v]==0)
            {
                printf("%d\t",v);
                F[v]=1;
                Q[++rear]=v;
            }
        }
    }
}


int main()
{
    int i,source,n,ch;
    printf("enter the number of nodes :");
    scanf("%d",&n);
    read_adj(n);
   
    while(1)
    {
        printf("1.DFS\n2.BFS\n3.exit\nEnter your choice :");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: for(source=0;source<n;source++)
                    {   
                        for(i=0;i<n;i++)
                            F[i]=0;
                        printf("Nodes reachable from %d :",source);
                        dfs(source,n);
                    }
                    break;
    
            case 2: for(source=0;source<n;source++)
                    {   
                        for(i=0;i<n;i++)
                            F[i]=0;
                        bfs(source,n);
                    }
                    break;
    
            case 3: exit(0); 
            default: printf("Enter valid Input!");
        }
    }

    return 0;
}