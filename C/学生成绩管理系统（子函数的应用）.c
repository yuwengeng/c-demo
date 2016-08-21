#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
double  s1,s2,s3;//学生的三门科成绩
void  Menu()
{
	puts("\t\t-----欢迎进入学生成绩管理系统-----");
	puts("\t\t         1----成绩录入");
	puts("\t\t         2----求总分");
	puts("\t\t         3----求平均成绩");
	puts("\t\t         4----求最高分");
	puts("\t\t         5----求最低分");
	puts("\t\t         6----成绩显示");
	puts("\t\t         7----退出");
	puts("\t\t    请选择……");
}
void  Input()
{puts("请输入该生的三门科成绩");
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
{puts("该学生的成绩为：");
 printf("高数： %.2lf\t%.2lf\t%.2lf\n",s1,s2,s3);
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
     case 2:printf("该同学的总分为：%.2f\n",Sum());
		 getchar();getch();
		 system("cls");
		 Menu();
		 break;
     case 3:printf("该同学的平均成绩为：%.2f\n",Ave());
		getchar();getch();
		system("cls");
		Menu();
		break;
     case 4:printf("该同学的最高成绩为：%.2f\n",Max_score());
		getchar();getch();
		system("cls");
		Menu();
		break;
	 case 5:printf("该同学的最低成绩为：%.2f\n",Min_score());
		getchar();getch();
		system("cls");
		Menu();
		break;
     case 6:Display();
		getchar();getch();
		system("cls");
		Menu();
		break;
	 case 7:puts("\t\t欢迎下次光临 ");exit(0);
	}
}
}