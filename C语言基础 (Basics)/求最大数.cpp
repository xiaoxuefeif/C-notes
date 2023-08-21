# include<stdio.h>
# include<stdlib.h>
# include<time.h> 

int *create_arr(int n)     // 生成随机数组 
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

int* sort(int array[],int len)                      // 按照从小到大进行排序 
{
	int *arr = array;
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int r=arr[j];arr[j]=arr[j+1];arr[j+1]=r;
			}
		}
	}
	return arr;
}


int main()
{
	int *arr = create_arr(10);
	int *res= sort(arr,10);
	
	printf("%d",res[9]);
	return 0;	
} 
