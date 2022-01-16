#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter number");
	scanf("%d",&a);
	printf("Enter number");
	scanf("%d",&b);
	printf("Enter number");
	scanf("%d",&c);
	if (a>b&&a>c)
	{
		printf("a is greatest-[%d]",a);
	}
	else
	if (b>a&&b>c)
	{
		printf("b is greatest-[%d]",b);
	}
	else
	if (c>a&&c>b)
	{
		printf("c is greatest-[%d]",c);
	}
	return 0;
}
