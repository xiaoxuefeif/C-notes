# include<stdio.h> 
# include<stdlib.h>
# include<string.h>
# include<math.h>
# include <stdbool.h>


// 不使用指针 
char * reverse_1(char s[])  //不在原字符串的基础上进行修改 
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

// 使用指针
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
	// 不使用指针 
	char *str1 = reverse_1(s);
	printf("%s\n",s);
	printf("%s\n",str1);
	
	// 使用指针 
	int len = strlen(s);
	reverse_2(s, s+len-1);
	printf("%s\n",s);
	
	//应用：将 "I like beijing." 变为 "beijing. like I" 
	char *start;
	char *end;
	
	start = s;                      // 将字符串的起始地址赋给start 
	while(*start)                   // 当start的值为 '\0' 时结束循环 
	{
		end = start;
	
		while(*end!=' ' && *end!='\0')   // *end!='\0' 的作用是避免最后一个单词出现死循环 
		{
			end++;
		}
		reverse_2(start, end-1);
		
		if(*end!='\0')                   // 使用判断是为了防止出现外层循环出现死循环           
		{
			end++;
		}
		
		start = end;
		
	}
	
	printf("%s\n",s);
	return 0;
	
}
 
