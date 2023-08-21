#include<stdio.h>

int factorial_sum(int n)
{
	int m=n;                 // 将n值付给临时变量m 
	int sum=0;
	for(int i=m;i>0;i--)
	{
		int res=1;           // 每次循环需要重置变量res 
		for(int j=i;j>0;j--)
		{
			res = res * j;
		}
		sum = sum + res;
	}
	return sum;
}

int main()
{
	int n;
	printf("请输入需要阶乘和的数字:");
	scanf("%d",&n);
	int result = factorial_sum();
	printf("%d\n",result); 
	return 0;
}
