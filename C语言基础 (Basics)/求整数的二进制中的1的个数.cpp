# include<stdio.h>

int fun(int n)
{
	int count=0;
	for(int i=0;i<32;i++)     // 32bit,ÒÆÎ» 
	{
		if((n >> i) & 1 == 1)
		{
			count++;
		}
	}
	return count;
}


int main()
{
	printf("%d\n",fun(15));
	return 0; 
} 
