#include<stdio.h>

struct student
{
    char usn[10];
    int marks;
}st;

int main ()
{
    scanf("%s",st.usn);
    scanf("%d",st.marks);
}
