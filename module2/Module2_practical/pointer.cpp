#include<stdio.h>
int main()
{
	int a=10;
	int *ptr=&a;
	printf("before value of a:%d\n",a);
	*ptr=20;
	printf("after change value of a:%d",*ptr);
	
	return 0;
}
