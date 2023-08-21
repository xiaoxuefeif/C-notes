#include<stdio.h>

int is_leap_year(int year)
{
	if((year%4==0 && year%100!=0) || year%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	for(int i=1000;i<=2000;i++)
	{
		if(is_leap_year(i))
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
