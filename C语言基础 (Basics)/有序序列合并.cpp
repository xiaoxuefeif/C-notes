# include<stdio.h> 
# include<stdlib.h>
# include<string.h>
# include<math.h>
# include <stdbool.h>

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n],b[m];
	for(int i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",b+i);
	}
	
	int i=0,j=0,k=0;
	int c[m+n];
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			c[k++]=a[i];
			i++;
		}
		else
		{
			c[k++]=b[j];
			j++;
		}
	}
	if(i<n)
	{
		for(;i<n;i++)
		{
			c[k++]=a[i];
		}
	}
	else
	{
		for(;j<m;j++)
		{
			c[k++]=b[j];
		}	
	}
	for(int i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
} 
 
