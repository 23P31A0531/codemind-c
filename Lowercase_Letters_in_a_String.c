#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
        	c++;
        }
    }
	printf("%d",c);
}