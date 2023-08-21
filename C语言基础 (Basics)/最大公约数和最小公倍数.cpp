# include<stdio.h>

int gcd(int m, int n)  // 辗转相除法求最大公约数(m>n)
{
	if(m<n) // 2,3
	{
		m=m+n;  // m=5
		n=m-n;  // n=2
		m=m-n;  // m=3		
	}
	while(1)
	{
		int r=m%n;
		if(r==0)
		{
			return n;
		}
		else
		{
			m=n;
			n=r;
		}		
	}
}


// 两个数的乘积等于这两个数的最大公约数与最小公倍数的积 
int lcm_1(int m ,int n)
{
	return (m*n)/gcd(m,n);
}

long lcm_2(int m, int n)
{
	if(m<n) // eg: 2,3
	{
		m=m+n;  // m=5
		n=m-n;  // n=2
		m=m-n;  // m=3		
	}
	int i=1;
	long p; 
	while(1)
	{
		if(m*i % n)
		{
			i++;
		}
		else
		{
			break;
		}
	}
	return m*i;
}


int main()
{
	int m=24,n=18;
	printf("%lld",lcm_2(m,n));
	return 0;	
}


 
