# include<stdio.h>


int fibo1(int n)   // 1,1,2,3,5,8,13,21 
{
	if(n<=2)
	{
		return 1;
	}
	else
	{
		return fibo1(n-1)+fibo1(n-2);
	}
}

int fibo2(int f)   // 非递归，效率高 
{
	int m=1,n=1,q=1;

	for(int i=0;i<f-2;i++)
	{
		q=m+n;
		m=n;
		n=q;
	}	
	return q;
}



int main()
{
	printf("%d",fibo2(12));
	return 0;	
}
