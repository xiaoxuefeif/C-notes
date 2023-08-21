# include<stdio.h> 
# include<stdlib.h>
# include<string.h>
# include<math.h>
# include <stdbool.h>


// ��ʹ��ָ�� 
char * reverse_1(char s[])  //����ԭ�ַ����Ļ����Ͻ����޸� 
{
	int len = strlen(s);
	char *str = (char *)malloc(sizeof(char)*(len+1));
	
	for(int i=0;i<len;i++)
	{
		str[i]=s[i];
	}
	
	for(int i=0;i<len/2;i++)
	{
		char temp;
		temp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = temp;		
	}
	return str; 
	
}

// ʹ��ָ��
void reverse_2(char* left, char* right)
{
	while(left<right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		
		left++;
		right--;
	}
	
} 




int main()
{
	char s[]={"I like beijing."};
	// ��ʹ��ָ�� 
	char *str1 = reverse_1(s);
	printf("%s\n",s);
	printf("%s\n",str1);
	
	// ʹ��ָ�� 
	int len = strlen(s);
	reverse_2(s, s+len-1);
	printf("%s\n",s);
	
	//Ӧ�ã��� "I like beijing." ��Ϊ "beijing. like I" 
	char *start;
	char *end;
	
	start = s;                      // ���ַ�������ʼ��ַ����start 
	while(*start)                   // ��start��ֵΪ '\0' ʱ����ѭ�� 
	{
		end = start;
	
		while(*end!=' ' && *end!='\0')   // *end!='\0' �������Ǳ������һ�����ʳ�����ѭ�� 
		{
			end++;
		}
		reverse_2(start, end-1);
		
		if(*end!='\0')                   // ʹ���ж���Ϊ�˷�ֹ�������ѭ��������ѭ��           
		{
			end++;
		}
		
		start = end;
		
	}
	
	printf("%s\n",s);
	return 0;
	
}
 
