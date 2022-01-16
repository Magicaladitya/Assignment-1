#include<stdio.h>
int main()
{
    float a;
	printf("Enter number");
	scanf("%f",&a);
	if (a<0)
	{
		printf("Number is negative-[%f]",a);
	}
	else
	if (a>0)
	{
		printf("Number is positive-[%f]",a);
	}
	else
	if (a==0)
	{
		printf("Number is Zero-[%f]",a);
	}
	return 0;
}
