#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
double  s1,s2,s3;//ѧ�������ſƳɼ�
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
void  Input()
{puts("��������������ſƳɼ�");
 scanf("%lf%lf%lf",&s1,&s2,&s3);
}

double  Sum()
{return  s1+s2+s3;}

double  Ave()
{double average;
 average=Sum()/3;
 return  average;}

double  Max_score()
{double  max=s1;
  if(s2>max)
       max=s2;
  if(s3>max)
       max=s3;
  return  max;
}

double  Min_score()
{double  min=s1;
 if(s2<min)
      min=s2;
 if(s3<min)
      min=s3;
 return  min;
}

void Display()
{puts("��ѧ���ĳɼ�Ϊ��");
 printf("������ %.2lf\t%.2lf\t%.2lf\n",s1,s2,s3);
}

void main()
{int choice;
 Menu();
 while(12)
 { 
    scanf("%d",&choice);
    switch(choice)
	{case 1:Input();
    	getchar();getch();
	    system("cls");
	    Menu();
	    break;
     case 2:printf("��ͬѧ���ܷ�Ϊ��%.2f\n",Sum());
		 getchar();getch();
		 system("cls");
		 Menu();
		 break;
     case 3:printf("��ͬѧ��ƽ���ɼ�Ϊ��%.2f\n",Ave());
		getchar();getch();
		system("cls");
		Menu();
		break;
     case 4:printf("��ͬѧ����߳ɼ�Ϊ��%.2f\n",Max_score());
		getchar();getch();
		system("cls");
		Menu();
		break;
	 case 5:printf("��ͬѧ����ͳɼ�Ϊ��%.2f\n",Min_score());
		getchar();getch();
		system("cls");
		Menu();
		break;
     case 6:Display();
		getchar();getch();
		system("cls");
		Menu();
		break;
	 case 7:puts("\t\t��ӭ�´ι��� ");exit(0);
	}
}
}