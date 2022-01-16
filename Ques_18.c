#include<stdio.h>
int main()
{
  int phy,chem,math,eng,comp,sum;
  printf("Enter the marks in physics");
  scanf("%d",&phy);
  printf("Enter the marks in chemistry");
  scanf("%d",&chem);
  printf("Enter the marks in mathematics");
  scanf("%d",&math);
  printf("Enter the marks in english");
  scanf("%d",&eng);
  printf("Enter the marks in computer");
  scanf("%d",&comp);
  sum=(phy+chem+math+eng+comp)/5;
  if (sum>=90)
  {
  	printf("Grade A");
  }
  else
  if (sum>=80)
  {
  	printf("Grade B");
  }
  else
  if (sum>=70)
  {
  	printf("Grade C");
  }
  else
  if (sum>=60)
  {
  	printf("Grade D");
  }
  else
  if (sum>=40)
  {
  	printf("Grade E");
  }
  else
  if (sum<40)
  {
  	printf("Grade F");
  }
  return 0;
}
