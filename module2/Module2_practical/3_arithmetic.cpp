#include<stdio.h>
main()
{
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	
	//arithmatic operator
	printf("sum:%d\n",a+b);
	printf("sub:%d\n",a-b);
	printf("mul:%d\n",a*b);
	printf("div:%d\n",a/b);
	a++;
	printf("increment:%d\n",a);
	b--;
	printf("decrement:%d\n",b);
}
