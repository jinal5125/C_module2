#include<stdio.h>
main()
{
	int a,b;
	printf("enter first value:");
	scanf("%d",&a);
	printf("enter second value:");
	scanf("%d",&b);
	
	printf("And:%d\n",a>0 && b>0);
	printf("Or:%d\n",a>0 || b>0);
	printf("Not:%d\n",!(a>0));
}
