#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void binsearch(int x,int v[],int n)
{
	/* 查找数字x 
	   数组v
	   数组长度n
	*/ 
	int m=0;
	for(int i=0;i<n;i++)
	{
		if(x == v[i])
		{
			printf("\n数字%d在数组的第%d个位置\n",x,i+1);
			m++;
		}
	}
	if(m == 0)
	{
		printf("\n数字%d在数组中未发现",x); 
	}	
} 

int *create_arr(int n)
{
	int len=n;
	static int v[] = {};
	// printf("开始随机生成数组元素......\n");
	
    srand(time(NULL));         // 设置随机数种子为当前时间戳
    
	for(int i=0;i<len;i++)
	{
		v[i] = rand() % 100;   // rand()的范围在一般在0~32727 
	} 
	return v;
}

int main()
{
	int len=0;
	printf("请输入数组的长度:");
	scanf("%d", &len);
	
	int *v = create_arr(len);
	printf("随机数组为:");
	
	for(int i=0;i<len;i++)
	{
		printf("%d ",v[i]); 
	} 
	
	binsearch(12,v,len);
	return 0;
	
}
