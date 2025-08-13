#include<stdio.h>
int fact(int num);
main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	printf("%d",fact(num));
}
int fact(int num)
{
	if(num==0)
	{
		return 1;
	}
	int factm=fact(num-1);
	int fact_new=factm*num;
	return fact_new;
}
