#include<stdio.h>
int main()
{
	int sp,cp,amount;
	printf("Enter selling price");
	scanf("%d",&sp);
	printf("Enter cost price");
	scanf("%d",&cp);
	if (sp>cp)
	{
		amount=sp-cp;
		printf("Profit-[%d]",amount);
	}
	else
	if (cp>sp)
	{
		amount=cp-sp;
		printf("Loss-[%d]",amount);
	}
	else
	{
		printf("No profit and no loss");
	}
	return 0;
}
