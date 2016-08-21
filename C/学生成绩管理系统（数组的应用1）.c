#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
//若干位学生的C语言成绩管理
void  Main_Menu()
{
	puts("\t\t-----欢迎进入学生成绩管理系统-----");
	puts("\t\t         1----成绩录入");
	puts("\t\t         2----求总分");
	puts("\t\t         3----求平均成绩");
	puts("\t\t         4----查询");
	puts("\t\t         5----成绩显示");
	puts("\t\t         6----退出");
	puts("\t\t    请选择……");
}
void Menu1()
{ puts("\t\t\t欢迎使用查询子系统");
  puts("\t\t\t    1--最高分    ");
  puts("\t\t\t    2--最低分");
  puts("\t\t\t    3--返回主菜单");
  puts("\t\t    请选择……");
}
int  Input(double s[])
{int n=0;
 puts("请输入该班级学生的C语言成绩，以0分结束：");
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
 puts("该班级学生的C语言成绩为：");
 for(i=0;i<n;i++)
     printf("%.2lf\t",s[i]);
 putchar('\n');
}

void main()
{int choice,count,ch1;
 double  score[10000];
 Main_Menu();
 while(12)
 { 
    scanf("%d",&choice);
    switch(choice)
	{case 1:count=Input(score);
    	getchar();getch();
	    system("cls");
	    Main_Menu();
	    break;
     case 2:Display(score,count);
		 printf("该同学的总分为：%.2f\n",Sum(score,count));
		 getchar();getch();
		 system("cls");
		 Main_Menu();
		 break;
     case 3:Display(score,count);
		printf("该同学的平均成绩为：%.2f\n",Ave(score,count));
		getchar();getch();
		system("cls");
		Main_Menu();
		break;
     case 4:system("cls");
		    Menu1();
			while(12)
            { scanf("%d",&ch1);
			  switch(ch1)	
			  { case 1:
			       Display(score,count);
			       printf("该同学的最高成绩为：%.2f\n",Max_score(score,count));
			       getchar();getch();
				   system("cls");Menu1();
			       break;
	            case 2:Display(score,count);
		           printf("该同学的最低成绩为：%.2f\n",Min_score(score,count));
	               getchar();getch();
				   system("cls");Menu1();
		           break;
				case 3:system("cls");Main_Menu();break;
				    
			  }
			if(ch1==3)  break;//while
			}
			break;//case  4 
     case 5:Display(score,count);
		getchar();getch();
		system("cls");
		Main_Menu();
		break;
	 case 6:puts("\t\t欢迎下次光临 ");exit(0);
	}
}
}