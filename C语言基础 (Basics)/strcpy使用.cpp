# include<stdio.h> 
# include<stdlib.h>
# include<string.h>
# include<math.h>
# include <stdbool.h>

char* my_strcpy(char *s1,const char *s2)
{
	char *p=s1;
	while(*s2!='\0')
	{
		*(p++) = *(s2++);
	}
	*p = '\0';
	return s1;	
} 



int main()
{

	char s[]={"abcdefghi"};
	// char *s="abc" Ŀ�꺯������ɱ� 
	// strcpy ����'\0'������'\0'Ҳ�´����ȥ 
	
	// Ĭ����'\0' 
	char arr1[]={"helloworld"};
	printf("%s\n", strcpy(s,arr1));
	
	// Ĭ��û��'\0'
	char arr2[]={'h','e','l','l','o'};
	printf("%s\n", strcpy(s,arr2));
	
	// �Զ��庯��
	printf("%s\n", my_strcpy(s,arr1));
	return 0; 
} 
 
 
 
 
 
 
 
 
