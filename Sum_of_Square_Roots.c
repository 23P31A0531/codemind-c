#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,i,k,sum=0;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
    k=sqrt(i);
    sum=sum+k;
    }
    printf("%.2f",sum);
}