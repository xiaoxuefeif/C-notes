# include<stdio.h>
# include<stdlib.h>
# include<string.h> 
 
// qsort(��ʼ��ַ�����ȣ����ʹ�С���ȽϺ���)
// void* �޾������͵�ָ��,���Խ����������͵ĵ�ַ  
// *e1>*e2 return 1    = return 0   < return -1 


// 1.�Ƚ���������Ԫ�� ��e1ָ��һ��������e2ָ����һ��������
int cmp_int(const void *e1, const void *e2)
{
	return (*(int *)e1 - *(int *)e2);
}

// 2.�ȽϽṹ��Ԫ�ص�˳��
struct stu{
	char name[20];
	int age;
}; 
int cmp_struct_name(const void *e1, const void *e2)
{
	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
}
int cmp_struct_age(const void *e1, const void *e2)
{
	return (((struct stu*)e1)->age - ((struct stu*)e2)->age);
}





int main()
{
	int a[]={0,9,8,7,6,5,4,3,2,1};
	int len = sizeof(a)/sizeof(a[0]);
	// 1. 
	qsort(a,len,sizeof(a[0]),cmp_int);
	for(int i=0;i<len;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	// 2.
	struct stu s[]={ {"xiaoxuefei",22},{"xiaohua",18},{"lisi",30} };
	int size = sizeof(s)/sizeof(s[0]);
	qsort(s,size,sizeof(s[0]),cmp_struct_name);
	for(int i=0;i<size;i++)
	{
		printf("%s %d\n",s[i].name,s[i].age);
	}
	qsort(s,size,sizeof(s[0]),cmp_struct_age);
	printf("*****************************************\n");
	for(int i=0;i<size;i++)
	{
		printf("%s %d\n",s[i].name,s[i].age);
	}
	
	return 0;
	 
	
}


















