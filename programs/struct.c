#include<stdio.h>
#include<string.h>
typedef struct student
{
    char name[10];
    int marks;
}S;
int main()
{
    S c1[3];
    char a[10]; 
    int i,n=3,flag=0;
    printf("enter the names of students in class\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",(c1[i].name));
    }
    printf("enter the string to be compared\n");
    scanf("%s",a);
    for(i=0;i<n;i++)
    {
        if(!(strcmp(c1[i].name,a)) )
            flag = 1;
    }
    if(flag)
    printf("student is present\n");
    else
    printf("student is not present\n");
}