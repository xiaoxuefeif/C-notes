# include<stdio.h>


// 青蛙跳台是动态规划问题，找规律：1，2，3，5，8... 

int fun(int n)
{
	if(n==1) return 1;
	if(n==2) return 2;
	
	return fun(n-1)+fun(n-2);
}


int main()
{
	printf("%d",fun(5));
	return 0;
} 
