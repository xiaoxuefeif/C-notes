# include<stdio.h>
int str_len1(char *s)     // 1.�ݹ� �������������׵�ַ 
{
	if(*s!='\0')
	{
		return 1+str_len1(s+1);    // ��ַ��1ָ����һ��Ԫ�صĵ�ַ 
	}
	else
	{
		return 0;
	}
}

int str_len2(char *s)    // 2.����ָ�� 
{
	char *start = s;
	char *end = s;
	while(*end!='\0')
	{
		end++;
	}
	return end-start;
	
} 

int str_len3(char *s)   // 3.������ 
{
	int count=0;
	while(*s!='\0')
	{
		count++;
		s++;
	} 
	return count;
}


int main()
{
	char s[]={"abcdef g_"};
	int len = str_len3(s);
	printf("%d", len);
	return 0;
}
