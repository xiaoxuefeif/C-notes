# include<stdio.h>

int sum_num(int m,int tag)
{
	int n=m;
	int sum=0;
	while(n)
	{
		if(n%10==tag) sum++;
		n=n/10;	
	}
	return sum;
}





int main()
{
	int sum=0;
	for(int i=1;i<=100;i++)
	{
		sum=sum+sum_num(i,9);
	} 
	printf("%d", sum);
	return 0;
}
