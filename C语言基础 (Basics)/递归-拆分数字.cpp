# include<stdio.h>

int test(int n)
{
	if(n>9)
	{
		test(n/10);
	}
	printf("%d ",n%10);
} 


int main()
{
	test(100);
	return 0; 
}

