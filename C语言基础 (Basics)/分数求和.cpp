# include<stdio.h>

// 分数求和(1/1-1/2+1/3...) 
double SUM(int n)
{
	double sum=0.0;
	double k=1.0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+(k/i);
		k=-k;
	}
	return sum;
}

int main()
{
	double result = SUM(100);
	printf("%lf",result);
	return 0;
}
