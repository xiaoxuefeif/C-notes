# include<stdio.h> 
# include<stdlib.h>
# include<string.h>
# include<math.h>
# include <stdbool.h>
# include <assert.h>
# include<ctype.h>



int main()
{
	// memcpy ÄÚ´æ¿½±´º¯Êý 
	int a[]={0,1,2,3,4,5,6,7,8,9};
	int b[20]={0};
	memcpy(b,a,40);
	for(int i=0;i<10;i++)
	{
		printf("%d ",b[i]); 
	}
	return 0; 
} 
 
 
 
 
 
 
 
 
