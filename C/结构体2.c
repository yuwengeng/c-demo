#include "stdio.h"
#include "stdlib.h"
#include "string.h"
typedef struct  menu
{char  no[10],name[20];
 double  price;
}Menu;
void main()
{FILE  *fp;
int i,j=0,n=0;
double  total_price=0.0;
Menu  m[500],mm[100];
char  read[20];
fp=fopen("d:\\�˵�.txt","r+");
while(!feof(fp))//file   end  of  file
{fscanf(fp,"%s%s%lf",m[n].no,m[n].name,&m[n].price);
 n++;
}
n--;
fclose(fp);
puts("��      ��\n���     ����       ����\n");
for(i=0;i<n;i++)
  printf("%s\t%s\t%.2lf\n",m[i].no,m[i].name,m[i].price);

puts("��˿�ʼ");

gets(read);
while(strcmp(read,"0")!=0)
{for(i=0;i<n;i++)
    if(strcmp(read,m[i].no)==0)
	{//printf("%s\t%s\t%.2lf\n",m[i].no,m[i].name,m[i].price);
	 mm[j]=m[i];
	 j++;
		total_price+=m[i].price;
	break;}
	gets(read);
}


printf("�븶�%.2lf",total_price);


}
