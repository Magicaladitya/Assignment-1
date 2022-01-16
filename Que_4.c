#include<stdio.h>
int main()
{
	int a;
	printf("Enter number");
	scanf("%d",&a);
	if (a%5==0&&a%11==0)
	{
		printf("Number is divisible-[%d]",a);
	}
	else
	{
		printf("Number is not divisible-[%d]",a);
	}
	return 0;
}
