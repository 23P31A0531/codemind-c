#include<stdio.h>
int main()
{
    int i,j,a;
    scanf("%d",&a);
    for(i=64+a;i>=65;i--)
    {
        for(j=64+a;j>=i;j--)
        {
            printf("%c ",i);
        }
        printf("
");
    }
    
}