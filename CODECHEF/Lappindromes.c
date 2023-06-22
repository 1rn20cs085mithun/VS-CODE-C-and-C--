// #include<stdio.h>
// #include<math.h>
// #include<stdlib.h>
// #include<string.h>
// #include<ctype.h>
// int main()
// {
//     int t,n,i,j;
//     char l[1000],d[550],c[550],a[550];
//     scanf("%d",&t);
//     while(t--)
//     {
//         scanf(" %s",l);
//         if((strlen(l))%2!=0)
//         {
//             n=(strlen(l))/2;
//             for(i=0;i<n;i++)
//             {
//                 d[i]=l[i];
//             }
//             d[i]='\0';
//             for(i=n,j=0;i<strlen(l);i++,j++)
//             {
//                 c[j]=l[i];
//             }
//             c[j]='\0';
//             if(strcmp(c,d)||strcmp(d,strrev(c)))
//             {
//                 printf("Yes\n");
//                 break;
//             }
//         }


//     }
//     return 0;
// }


#include <stdio.h>
#include<string.h>
int main(void) {
	int k;
	scanf("%d",&k);
	while(k--)
	{
	    char str[1000];
	    scanf("%s",str);
	    int arr[26]={0};
	    int flag=0,i,j;
	    int len=strlen(str);
	    int val=len/2;
	    for(i=0;i<val;i++)
	    {
	        arr[str[i]-97]++;
	    }
	    if(len%2!=0)
	    i++;
	    for(j=i;j<len;j++)
	    {
	        arr[str[j]-97]--;
	    }
	    for(i=0;i<26;i++)
	    {
	        if(arr[i]!=0)
	        {   
	          
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	    
	    
	}
	return 0;
}


