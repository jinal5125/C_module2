#include<stdio.h>
int main()
{
	int sum=0;
	int num[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",num[i][j]);
			sum=sum+num[i][j];
		}
		printf("\n");
	}
	printf("sum of matrix:%d",sum);
	return 0;
}
