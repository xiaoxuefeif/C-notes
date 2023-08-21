# include<stdio.h> 

int is_prime_1(int m)   // 效率低 
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

int is_prime_2(int m)  // 效率高 
{
	if(m<=1) return 0;        // 注意小于等于1的情况 
	
	for(int i=2;i*i<=m;i++)   // 注意等于 
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
	for(int i=1;i<=100;i++)   // i+=2会漏掉 "2" 这个素数 
	{
		if(is_prime_1(i))
		{
			num++;
		}
	}
	printf("%d",num);
	return 0;
}
