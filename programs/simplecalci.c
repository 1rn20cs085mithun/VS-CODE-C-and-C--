#include<stdio.h>
#include<stdlib.h>
int main()
{
    int op1,op2,res;
    char oper;
    printf("enter the two operands\n");
    scanf("%d%d",&op1,&op2);
    printf("enter the operator\n");
    scanf(" %c",&oper);
    switch(oper)
    {
        case '+':  res=op1+op2 ;
                //printf("%d",res);
                break;
        case '-' :  res = op1-op2;
                  //  printf("%d",res);
                    break;
        case '*' :  res = op1*op2;
                    //printf("%d",res);
                    break;
        case '/' :  if (op2/op1==0)
                    printf("divide by zero error\n try again with valid inputs\n");
                    else
                    res = op1/op2;
                    //printf("%d",res);
                    break;
        default :  printf("Invalid inputs!!!!\n");
                   printf("try again with valid operator\n");
                    exit(0);
    }
        printf("%d",res);
    return 0;
}