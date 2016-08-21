#include "stdio.h"
#include "string.h"
#define N 150
#define M 10

void Sort(char str[][M],int n);
int  main()
{
	char name[N][M];
	int  n,i;
	printf("how many cuntries?\n");
	scanf("d",&n);
	getchar();
    printf("put the country!\n");
	for(i=0;i<n;i++)
	{
		gets(name[i]);
		
	}
	Sort(name,n);
	printf("sort result!\n");
	for(i=0;i<n;i++)
	{ 
		puts(name[i]);
		
		
	}
	return 0;
	
	
	
}

void Sort(char str[][M],int n)
{
	char max[40];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[j],str[i])<0)
			{
				strcpy(max,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],max);
				
			}
			
			
		}
		
	}
	
	
}