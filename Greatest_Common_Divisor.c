#include<stdio.h>
int main()
{
	int a,b,i,m,gcd,n;
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		m=i*a;
		n=m%b;
		gcd=(a*b)/m;
		if(n==0)
		{
		    gcd=(a*b)/m;
			printf("%d",gcd);
			break;
		}
}
}