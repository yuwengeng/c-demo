#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
//����λѧ����C���Գɼ�����
void  Menu()
{
	puts("\t\t-----��ӭ����ѧ���ɼ�����ϵͳ-----");
	puts("\t\t         1----�ɼ�¼��");
	puts("\t\t         2----���ܷ�");
	puts("\t\t         3----��ƽ���ɼ�");
	puts("\t\t         4----����߷�");
	puts("\t\t         5----����ͷ�");
	puts("\t\t         6----�ɼ���ʾ");
	puts("\t\t         7----�˳�");
	puts("\t\t    ��ѡ�񡭡�");
}
int  Input(double s[])
{int n=0;
 puts("������ð༶ѧ����C���Գɼ�����0�ֽ�����");
 do{
     scanf("%lf",&s[n]);
     n++;
 }while(s[n-1]!=0);
 return  n-1;
}

double  Sum(double  s[],int n)
{int i;
 double sum=0;
 for(i=0;i<n;i++)
	 sum+=s[i];
 return  sum;}

double  Ave(double  s[],int n)
{double average;
 average=Sum(s,n)/n;
 return  average;}

double  Max_score(double  s[],int n)
{double  max=s[0];
 int i;
  for(i=0;i<n;i++)
  if(s[i]>max)
       max=s[i];
  return  max;
}

double  Min_score(double  s[],int n)
{double  min=s[0];int i;
 for(i=0;i<n;i++)
  if(s[i]<min)
       min=s[i];
 return  min;
}

void Display(double  s[],int n)
{int  i;
 puts("�ð༶ѧ����C���Գɼ�Ϊ��");
 for(i=0;i<n;i++)
     printf("%.2lf\t",s[i]);
 putchar('\n');
}

void main()
{int choice,count;
 double  score[10000];
 Menu();
 while(12)
 { 
    scanf("%d",&choice);
    switch(choice)
	{case 1:count=Input(score);
    	getchar();getch();
	    system("cls");
	    Menu();
	    break;
     case 2:Display(score,count);
		 printf("��ͬѧ���ܷ�Ϊ��%.2f\n",Sum(score,count));
		 getchar();getch();
		 system("cls");
		 Menu();
		 break;
     case 3:Display(score,count);
		printf("��ͬѧ��ƽ���ɼ�Ϊ��%.2f\n",Ave(score,count));
		getchar();getch();
		system("cls");
		Menu();
		break;
     case 4:Display(score,count);
		printf("��ͬѧ����߳ɼ�Ϊ��%.2f\n",Max_score(score,count));
		getchar();getch();
		system("cls");
		Menu();
		break;
	 case 5:Display(score,count);
		printf("��ͬѧ����ͳɼ�Ϊ��%.2f\n",Min_score(score,count));
		getchar();getch();
		system("cls");
		Menu();
		break;
     case 6:Display(score,count);
		getchar();getch();
		system("cls");
		Menu();
		break;
	 case 7:puts("\t\t��ӭ�´ι��� ");exit(0);
	}
}
}