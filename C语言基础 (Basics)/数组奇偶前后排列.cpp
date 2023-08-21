# include<stdio.h>

void move(int a[], int len)
{
	// ʹ��˫ָ��
	int left = 0;
	int right = len-1;
	
	while(left<right)
	{
		// ��ǰ�ҵ�ż��
		while(left<right && a[left]%2==1)
		{
			left++;
		}
		// �Ӻ��ҵ�����
		while(left<right && a[right]%2==0) 
		{
			right--;
		}
		if(left<right)
		{
			int temp=a[left];
			a[left]=a[right];
			a[right]=temp;
//			left++;
//			right--;
		}
	}
	
}



int main()
{
	int a[] = {0,1,2,3,4,5,6,7,8,9,13};
	int len = sizeof(a)/sizeof(a[0]);
	move(a,len);
	for(int i=0;i<len;i++)
	{
		printf("%d ",a[i]);	
	} 
	return 0;
	
}
