#include<stdio.h>
int mod(int,int);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int res=mod(a,b);
    printf("%d",res);
    
}
int mod(int a,int b)
{
    int c;
    c=a%b;
    return c;
}
