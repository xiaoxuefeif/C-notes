#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void binsearch(int x,int v[],int n)
{
	/* ��������x 
	   ����v
	   ���鳤��n
	*/ 
	int m=0;
	for(int i=0;i<n;i++)
	{
		if(x == v[i])
		{
			printf("\n����%d������ĵ�%d��λ��\n",x,i+1);
			m++;
		}
	}
	if(m == 0)
	{
		printf("\n����%d��������δ����",x); 
	}	
} 

int *create_arr(int n)
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

int main()
{
	int len=0;
	printf("����������ĳ���:");
	scanf("%d", &len);
	
	int *v = create_arr(len);
	printf("�������Ϊ:");
	
	for(int i=0;i<len;i++)
	{
		printf("%d ",v[i]); 
	} 
	
	binsearch(12,v,len);
	return 0;
	
}
