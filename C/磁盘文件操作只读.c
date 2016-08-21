#include "stdio.h"
#include "stdlib.h"
typedef struct student
{
	char name[20];
	int age;
	float height;
}Student;
void main()
{
	FILE *fp;
	Student one;
	fp=fopen("d://Îº¿µ.txt","r+");
	fscanf(fp,"%s%d%f",one.name,&one.age,&one.height);
	fclose(fp);
	printf("%s %d %f",one.name,one.age,one.height);


}