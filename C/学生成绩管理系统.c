#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "string.h"
typedef  struct  stu
{char  no[15],name[10],province[10];//
 float  score[3],total_s;
}ST;

void  Menu1()
{
	puts("\t\t-----欢迎进入学生成绩管理系统-----");
	puts("\t\t         1----访问数据源");
	puts("\t\t         2----成绩处理");
	puts("\t\t         3----查询");
	puts("\t\t         4----输出");
	puts("\t\t         5----退出");
	puts("\t\t    请选择……");
}
void  Menu2()  //
{
	puts("\t\t-----欢迎进入学生成绩计算子系统-----");
	puts("\t\t         1---按学科");
        puts("\t\t         2---按学生");
        puts("\t\t         3---返回");
	puts("\t\t         请选择……");
}
void  Menu3()
{
	puts("\t\t-----欢迎进入查询子系统-----");
	puts("\t\t         1---按姓名查询");
    puts("\t\t         2---按学号查询");
	puts("\t\t         3---按省份查询");
    puts("\t\t         4---返回");
	puts("\t\t    请选择……");
}
int   Init(ST  *st)
{int n=0,i;
  char  line[90];
 FILE   *fp;
 fp=fopen("学生成绩表.txt","r+");
 fgets(line,80,fp);//读出第一行的标题

 while(!feof(fp))
 {
  fscanf(fp,"%s%s%s",st[n].no,st[n].name,st[n].province);
  for(i=0;i<3;i++)
      fscanf(fp,"%f",&st[n].score[i]);
  n++;
 }
 
 return  n-1;     
}
void Dis_stu(ST  *st)//输出某位同学的信息
{int j;
	printf("%s\t%s\t%s\t",st->no,st->name,st->province);
     for(j=0;j<3;j++)
		  printf("%.2f\t",st->score[j]);
}

double  Ave_course(ST  *s,int course_num,int  n)
{double sum=0,average;
 int  i;
 for(i=0;i<n;i++)
	sum+=s[i].score[course_num-1] ;
 average=sum/n;
 return  average;
}

void Display(ST  *s,int n)
{int  i,j;
puts("学  号  	 姓 名	省份   C语言   外语    高数");
printf("%d位学生信息：\n",n);
   
 for(i=0;i<n;i++)
	{printf("%s\t%s\t%s\t",s[i].no,s[i].name,s[i].province);
     for(j=0;j<3;j++)
		  printf("%.2f\t",s[i].score[j]);
	 putchar('\n');
	}
}

double  Ave_stu(ST  *s,char  *no,int n)
{double average,sum=0;
 int i,j;
 for(i=0;i<n;i++)
	  if(strcmp(s[i].no,no)==0)
		  break;
 for(j=0;j<3;j++)
     sum+=s[i].score[j];
 average=sum/3;
 return  average;}




void main()
{int choice1,choice2,choice3,course_no,stu_num;
int i;
ST  stu[2000];
char stu_no[20];
 Menu1();
 while(12)
 { 


	 scanf("%d",&choice1);
    switch(choice1)
	{case 1:stu_num=Init(stu);
            printf("录入%d位学生信息",stu_num);
	        getchar();getch();
	    system("cls");
	    Menu1();
	    break;
     case 2:system("cls");
		  Menu2();
		  while(8)
		  {
		  scanf("%d",&choice2);
          switch(choice2)
		  {case 1:puts("请输入学科编号");
		          scanf("%d",&course_no);
		          printf("本科平均成绩为：%.2f\n",
			        Ave_course(stu,course_no,stu_num));
				  getchar();getch();
	              system("cls")
	               Menu2();
				  break;
		  case  2:puts("请输入学生学号");
		          getchar();
			      scanf("%s",stu_no);
				  for(i=0;i<stu_num;i++)
					  if(strcmp(stu[i].no,stu_no)==0)
					  { Dis_stu(&stu[i]);break;}
		          printf("\n该生平均成绩为：%.2f\n",
			        Ave_stu(stu,stu_no,stu_num));
				  getchar();getch();
	              system("cls");
	               Menu2();
				   break;
		  case  3:system("cls");
			       getchar();
		           Menu1();break;}
		 
		 if(choice2==3) break;
		  } break;
    case 3:system("cls");//查询功能
		  Menu3();
		  while(8)
		  {
		  scanf("%d",&choice3);
          switch(choice3)
		  {case 1:puts("请输入学科编号");
		          scanf("%d",&course_no);
		          printf("本科平均成绩为：%.2f\n",
			        Ave_course(stu,course_no,stu_num));
				  getchar();getch();
	              system("cls");
	               Menu2();
				  break;
		  case  2:puts("请输入学生学号");
		          getchar();
			      scanf("%s",stu_no);
				  for(i=0;i<stu_num;i++)
					  if(strcmp(stu[i].no,stu_no)==0)
					  { Dis_stu(&stu[i]);break;}
		          printf("\n该生平均成绩为：%.2f\n",
			        Ave_stu(stu,stu_no,stu_num));
				  getchar();getch();
	              system("cls");
	               Menu2();
				   break;
		  case  3:system("cls");
			       getchar();
		           Menu1();break;}
		 
		 if(choice2==3) break;
		  } 
		  break;
    /*  case 4:printf("该同学的最高成绩为：%.2f\n",Max_score());
		getchar();getch();
		system("cls");
		Menu();
		break;
	 case 5:printf("该同学的最低成绩为：%.2f\n",Min_score());
		getchar();getch();
		system("cls");
		Menu();
		break;*/
     case 4:
		 puts("\t\t信息如下：");
		 Display(stu,stu_num);
		getchar();getch();
		system("cls");
		Menu1();
		break;
	 case 5:puts("\t\t欢迎下次光临 ");exit(0);
	}
}
}