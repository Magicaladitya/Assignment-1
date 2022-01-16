#include<stdio.h>
int main()
{
	int side_1,side_2,side_3,sum;
	printf("Enter first side");
	scanf("%d",&side_1);
	printf("Enter second side");
	scanf("%d",&side_2);
	printf("Enter third side");
	scanf("%d",&side_3);
	sum=side_1+side_2+side_3;
	if (sum==180)
	{
		printf("Triangle is valid");
	}
	else
	{
		printf("Triangle is not valid");
	}
	return 0;
}
