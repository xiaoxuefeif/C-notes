#include<stdio.h>

int factorial_sum(int n)
{
	int m=n;                 // ��nֵ������ʱ����m 
	int sum=0;
	for(int i=m;i>0;i--)
	{
		int res=1;           // ÿ��ѭ����Ҫ���ñ���res 
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
	printf("��������Ҫ�׳˺͵�����:");
	scanf("%d",&n);
	int result = factorial_sum();
	printf("%d\n",result); 
	return 0;
}
