#include "stdio.h"
#include "stdlib.h"
typedef struct teacher
{
	long ID;
	char subject[40];
	char name[20];
	char sex;
	int age;
	int wage;
	int bonus;
}Teacher;
void main()
{
    
	FILE *fp;
	int i=0,j;
	Teacher te[20];
	fp=fopen("d://¹¤×Ê.txt","r+");
	while(!feof(fp))
	{
	 fscanf(fp,"%ld%s%s %c%d%d%d",&te[i].ID,te[i].subject,te[i].name,&te[i].sex,&te[i].age,&te[i].wage,&te[i].bonus);
		i++;
	}
	i--;
	fclose(fp);
	
	for(j=0;j<i;j++)
	{
		
		printf("%ld\t%s\t     %s\t%c\t%d\t%d\t%d\n",te[j].ID,te[j].subject,te[j].name,te[j].sex,te[j].age,te[j].wage,te[j].bonus );
		 
	}

}
