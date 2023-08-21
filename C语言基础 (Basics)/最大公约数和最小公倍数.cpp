# include<stdio.h>

int gcd(int m, int n)  // շת����������Լ��(m>n)
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


// �������ĳ˻������������������Լ������С�������Ļ� 
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


 
