#include<stdio.h>

int factorial(int n)  //�׳˺��� 
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
	printf("��������Ҫ�׳˵�����:"); 
	scanf("%d", &a);
	int res = factorial(a);
	printf("%d\n", res);
	return 0;
} 
