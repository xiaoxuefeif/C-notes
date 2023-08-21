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
	// char *s="abc" 目标函数必须可变 
	// strcpy 遇到'\0'结束，'\0'也会拷贝过去 
	
	// 默认有'\0' 
	char arr1[]={"helloworld"};
	printf("%s\n", strcpy(s,arr1));
	
	// 默认没有'\0'
	char arr2[]={'h','e','l','l','o'};
	printf("%s\n", strcpy(s,arr2));
	
	// 自定义函数
	printf("%s\n", my_strcpy(s,arr1));
	return 0; 
} 
 
 
 
 
 
 
 
 
