#include<stdio.h>
int main()
{
	int n,count;
	scanf("%d",&n);
	int a[n],i,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
       if(a[i]%2==1)
       {
       	count=a[i];
	   }
	}
	k=count;
	printf("%d ",k);
}
	
