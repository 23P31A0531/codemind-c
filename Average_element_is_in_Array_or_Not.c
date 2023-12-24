#include<stdio.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    int avg,sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=a[i];
    }
    avg=sum/n;
    for(i=1;i<=n;i++)
    {
      if(avg==a[i]) 
       {
           flag=1;
           break;
       }
    }
    if(flag==1)
    {
        printf("True");
    }
       else
       {
           printf("False");
       }
    }
    
    
    
