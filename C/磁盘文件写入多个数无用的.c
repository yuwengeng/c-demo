/*#include "stdio.h"
#include "stdlib.h"
typedef struct teacher
{char name[40];

}Techer;
FILe*/
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
	FILE *fp;
	Student one;
	printf("some information!");
	scanf("%s ",one.name );
	scanf(" %d%f", &one.old,&one.height);
	fp=fopen("d://Îº¿µ.txt","w+");
	fprintf(fp,"%s  %d  %10.2f",one.name,one.old,one.height);
	fclose(fp);

	



}