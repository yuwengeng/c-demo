#include "stdio.h"
#include "stdlib.h"
typedef struct student
{
	char name[20];
	int old;
	float height;
	
	
}Student;
void main()
{
	int i=0,p,k,j;
	float max;
	FILE *fp;
    Student one[20];
	fp=fopen("d://abc.txt","r+");
	while(!feof(fp))
	{
		fscanf(fp,"%s %d %f",one[i].name,&one[i].old,&one[i].height);
		i++;
	}
	i--;
	
	for(p=0;p<i;p++)
	{
		for(k=p;k<i;k++)
		{
			if(one[p].height<one[k].height)
			{
				max=one[p].height;
				one[p].height=one[k].height;
				one[k].height=max;
			}
			
			
			
			
		}
	}
	
	puts("what informatinon you have got");
	
	for(j=0;j<i;j++)
	{
		printf("%s  %d    %f\n",one[j].name,one[j].old,one[j].height);
	}
	fclose(fp);
	
	
	
	
	
}