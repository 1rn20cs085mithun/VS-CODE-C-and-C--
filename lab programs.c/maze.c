#include<stdio.h> 
int solvemaze(int size,int sol[][size],int maze[][size],int r,int c)
{
	
	if(r==size-1 && c==size-1)
	{
		sol[r][c]=1;
		return 1;
	}
	if(r>=0 && c>=0 && r<size && c<size && sol[r][c]==0 && maze[r][c]==0)
	{
		// if safe to visit ,visit the cell
		sol[r][c]=1;
		//going down
		if(solvemaze(size,sol,maze,r+1,c))
			return 1;
		//going right
		if(solvemaze(size,sol,maze,r,c+1))
			return 1;
		//going up
		if(solvemaze(size,sol,maze,r-1,c))
			return 1;
		//going left
		if(solvemaze(size,sol,maze,r,c-1))
			return 1;
		//backtracking
		sol[r][c]=0;
		return 0;	
	}
	return 0;
}

int main()
{
	int i,j,size;
	printf("enter the size of the maze\n");
	scanf("%d",&size);
	int maze[size][size],sol[size][size];
	printf("enter the maze\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&maze[i][j]);
			sol[i][j]=0;
		}
	}
	if(solvemaze(size,sol,maze,0,0))
	{
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
				printf("%d ",sol[i][j]);
			printf("\n");
		}
	}
	else
		printf("solution does not exist\n");	
}