#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];//declaration
	scanf("%[^
]s",str);//reading
	int len=strlen(str);//finding lenth of string
	printf("%d",len);
}