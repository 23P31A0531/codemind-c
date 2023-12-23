#include<stdio.h>
int main()
{
    char s1[20],s2[20];
    scanf("%[^
]s",s1);
    int i;
    for(i=0;s1[i]!=NULL;i++)
    {
        s2[i]=s1[i];
    }
    s2[i]=NULL;
    printf("%s",s2);
}