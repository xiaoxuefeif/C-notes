# include<stdio.h>
# include<stdlib.h>
# include<time.h> 

int *create_arr(int n)     // ����������� 
{
	int len=n;
	static int v[] = {};
	// printf("��ʼ�����������Ԫ��......\n");
	
    srand(time(NULL));         // �������������Ϊ��ǰʱ���
    
	for(int i=0;i<len;i++)
	{
		v[i] = rand() % 100;   // rand()�ķ�Χ��һ����0~32727 
	} 
	return v;
}

int* sort(int array[],int len)                      // ���մ�С����������� 
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
