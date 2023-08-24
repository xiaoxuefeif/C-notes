# include<stdio.h> 
# include<stdlib.h>
# include<string.h>
# include<math.h>
# include <stdbool.h>
# include <assert.h>


// 自定义函数 
char *my_strstr(const char *str1, const char *str2)
{
	assert(str1 && str2);
	const char *s1=str1;
	const char *s2=str2;
	const char *p=str1;
	while(*p)
	{
		s1 = p;
		s2 = str2;
		while(*s1==*s2 && *s1!='\0' && *s2!='\0')
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
		{
			return (char*)p;
		}
		p++;
	}
	return NULL;	
} 

int main()
{
	// strstr函数，返回匹配字符串的起始地址，可使用相减来确定位置，从0开始 
	
	char s1[]={"xiaoxuefei"};
	char s2[]={"xue"};
	char *s = my_strstr(s1,s2);
	printf("%d\n", s - s1);
	printf("%s\n", strstr(s1,s2));
	return 0; 
} 
 
 
 
 
 
 
 
 
