#include<stdio.h>
int main()
{
    int n,k,r,sum=0,p,r1,sum1=0;
    scanf("%d",&n);
    k=n*n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
}
       p=sum*sum;
    while(p!=0)
    {
        r1=p%10;
        sum1=sum1*10+r1;
        p=p/10;
    }
    if(k==sum1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}