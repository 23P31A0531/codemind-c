#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[200];
	scanf("%[^
]s",s1);
	strcpy(s2,s1);
    int i=0,t,j=strlen(s1)-1;
	while(i<=j)
	{
	  t=s1[i];
	  s1[i]=s1[j];
	  s1[j]=t;
	  i++;
	  j--;
	}
	if(strcmp(s1,s2)==0)
	{
	    printf("Palindrome");
	}
	else
	{
	    printf("Not Palindrome");
	}
}
