#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=65;i<=64+n;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("
");
    }
}