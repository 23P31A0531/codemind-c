#include<stdio.h>
#include<math.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    k=sqrt(n);
    if(n==(k*k))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}