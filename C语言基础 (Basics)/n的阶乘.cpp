#include<stdio.h>

int factorial(int n)  //阶乘函数 
{
	int res=1;
	for(int i=n;i>0;i--)
	{
		res = res * i;
	}
	return res;
}

int main()
{
	int a;
	printf("请输入需要阶乘的数字:"); 
	scanf("%d", &a);
	int res = factorial(a);
	printf("%d\n", res);
	return 0;
} 
