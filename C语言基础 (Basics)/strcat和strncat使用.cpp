# include<stdio.h> 
# include<stdlib.h>
# include<string.h>
# include<math.h>
# include <stdbool.h>


// �Զ��庯�� 
char* my_strcat(char *s1,const char *s2)
{
	char *p=s1+strlen(s1);
	while(*s2!='\0')
	{
		*(p++) = *(s2++);
	}
	*p = '\0';
	return s1;	
} 

int main()
{
	// strcat(s1,s2)  s1���ַ�������s1+s2; 
	char s1[]={"abc+"};
	char s2[]={"helloworld"};
    //	printf("%s\n", strcat(s1,s2));
	printf("%s\n", my_strcat(s1,s2));
	
	// strncat ��������������Ϊ�����ֽ��� 
	char s3[]={"abcdef"};
	char s4[]={"helloworld"};
	printf("%s\n", strncat(s3,s4,5)); 
	printf("%s\n",s3);
	return 0; 
} 
 
 
 
 
 
 
 
 
