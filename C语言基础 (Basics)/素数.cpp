# include<stdio.h> 

int is_prime_1(int m)   // Ч�ʵ� 
{
	if(m<=1) return 0;
	
	int i=0;
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		{
			return 0;
		}
	}
	if(i==m)
	{
		return 1;
	}
}

int is_prime_2(int m)  // Ч�ʸ� 
{
	if(m<=1) return 0;        // ע��С�ڵ���1����� 
	
	for(int i=2;i*i<=m;i++)   // ע����� 
	{
		if(m%i==0)
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	int num=0;
	for(int i=1;i<=100;i++)   // i+=2��©�� "2" ������� 
	{
		if(is_prime_1(i))
		{
			num++;
		}
	}
	printf("%d",num);
	return 0;
}
