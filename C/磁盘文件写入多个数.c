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
	int i;
	FILE *fp;
	Student one[20];
	printf("some information!\n");
	for(i=0;i<3;i++)
	{
		scanf("%s  %d   %f",one[i].name ,&one[i].old,&one[i].height);
		

	}
	fp=fopen("d://Îº¿µ1.txt","w+");
    for(i=0;i<3;i++)
	{
		fprintf(fp,"%s  %d  %10.2f\n",one[i].name,one[i].old,one[i].height);
	}
	fclose(fp);
	
	
	
	
	
}


