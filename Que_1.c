#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter number");
	scanf("%d",&a);
	printf("Enter number");
	scanf("%d",&b);
	if (a>b)
	{
		printf("a is greater-[%d]",a);
	}
	else
	if (b>a)
	{
		printf("b is greater-[%d]",b);
	}
	return 0;
}
