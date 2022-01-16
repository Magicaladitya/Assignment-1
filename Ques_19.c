#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter unit consumed");
	scanf("%f",&a);
	if (a<=50)
	{
	  b=0.50*a+20;
	  printf("Total bill-%f",b);
	}
	else
	if (a>50&&a<=150)
	{
		b=0.75*a+20;
		printf("Total bill-%f",b);
	}
	else
	if (a>150&&a<=250)
	{
		b=1.20*a+20;
		printf("Total bill-%f",b);
	}
	else
	if (a>250&&a<=500)
	{
		b=1.50*a+20;
		printf("Total bil-%f",b);
	}
	return 0;
}
