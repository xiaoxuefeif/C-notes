# include<stdio.h>

int fun(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*fun(n-1);
	}
}

int main()
{
	printf("%d\n",fun(5));
	return 0;
	
} 
