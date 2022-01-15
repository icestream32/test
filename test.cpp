#include<stdio.h>
int main ()
{
	int a=1,b=2,c,n;
	scanf("%d",&n);
	if (n==1)
	{
		printf("1\n");
		return 0;
	}
	if (n==2)
	{
		printf("2\n");
		return 0;
	}
	for (int i=1;i<=n-3;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	printf("%d",b);
	return 0;
} 