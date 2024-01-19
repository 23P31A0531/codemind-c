#include<stdio.h>
int main()
{
	int a,b,i,n,m,gcd;
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		m=i*a;
		n=m%b;
		if(n==0)
		{
		    gcd=(a*b)/m;
			printf("%d",gcd);
			break;
		}
}
}