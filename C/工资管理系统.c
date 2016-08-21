#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "string.h"
typedef struct teacher
{
	long ID;
	char subject[20];
	char name[30];
	char sex;
	int age;
	int wage;
	int bonus;
}Teacher;

void  Menu1()
{
	puts("\t\t-----欢迎进入教师工资管理系统-----");
	puts("\t\t         1----访问数据源");
	puts("\t\t         2----查询");
	puts("\t\t         3----调研");
	puts("\t\t         4----输出");
	puts("\t\t         5----退出");
	puts("\t\t    请选择……");
}
void  Menu2()  
{
	puts("\t\t-----欢迎进入教师工资计算子系统-----");
	puts("\t\t         1---按编号");
	puts("\t\t         2---按年龄");
	puts("\t\t         3---按性别");
	puts("\t\t         4---按姓名");
	puts("\t\t         5---返回");
	puts("\t\t    请选择……");
}
void  Menu3()  
{
	puts("\t\t-----欢迎进入教师工资计算子系统-----");
	puts("\t\t         1---求最大工资");
	puts("\t\t         2---求最高奖金");
	puts("\t\t         3---按最高总工资");
	puts("\t\t         4---返回");
	puts("\t\t    请选择……");
}
int   Init1(Teacher  *te)
{
	int n=0;
	FILE *fp;
	fp=fopen("d://工资.txt","r+");
	while(!feof(fp))
	{
		fscanf(fp,"%ld%s%s %c%d%d%d",&te[n].ID,te[n].subject,te[n].name,&te[n].sex,&te[n].age,&te[n].wage,&te[n].bonus);
		n++;
	}
	n--;
	fclose(fp);
    return n;
	
}
int   Init2(Teacher  *te)
{
	int n=0,i;
	FILE *fp;
	fp=fopen("d://工资.txt","r+");
	while(!feof(fp))
	{
		fscanf(fp,"%ld%s%s %c%d%d%d",&te[n].ID,te[n].subject,te[n].name,&te[n].sex,&te[n].age,&te[n].wage,&te[n].bonus);
		n++;
	}
	n--;
	printf("编号    科目     姓名     sex   年龄     工资     奖金\n");
	for(i=0;i<n;i++)
	{
		printf("%ld\t%s\t %s\t  %c\t%d\t %d\t  %d\n",te[i].ID,te[i].subject,te[i].name,te[i].sex,te[i].age,te[i].wage,te[i].bonus);
	}
	
	fclose(fp);
    return n;
	
}
long chazhao1(Teacher *te,int te_num)
{
	int i,m=te_num;
	char p;
	printf("请输入你想要查询的老师的编号!\n");
	scanf("%ld",&p);
	printf("编号    科目     姓名     sex   年龄     工资     奖金\n");
	for(i=0;i<m;i++)
	{
		if(p==te[i].ID)
		{
			printf("%ld\t%s\t %s\t  %c\t%d\t %d\t  %d\n",te[i].ID,te[i].subject,te[i].name,te[i].sex,te[i].age,te[i].wage,te[i].bonus);
		}
		
	}
	
}
long chazhao2(Teacher *te,int te_num )
{
	int i,m=te_num,p;
	printf("请输入你想要查询age!\n");
	scanf("%d",&p);
	printf("编号    科目     姓名     sex   年龄     工资     奖金\n");
	for(i=0;i<m;i++)
	{
		if(p==te[i].age)
		{
			printf("%ld\t%s\t %s\t  %c\t%d\t %d\t  %d\n",te[i].ID,te[i].subject,te[i].name,te[i].sex,te[i].age,te[i].wage,te[i].bonus);
		}
		
	}
	
}
long chazhao3(Teacher *te,int te_num )
{
	int  i,m=te_num,p;
	printf("请输入你想要查询的是男性【2】的还是女性的老师【1】!\n");
	scanf("%d",&p);
	printf("姓名     工资    奖金\n");
	if(p==1)
		for(i=0;i<m;i++)
		{
			if('F'==te[i].sex)
			{
				printf("%s\t %d\t  %d\n",te[i].name,te[i].wage,te[i].bonus);
			}
		}
		else
			for(i=0;i<m;i++)
			{
				if('M'==te[i].sex)
				{
					printf("%s\t %d\t %d\n", te[i].name ,te[i].wage,te[i].bonus);
				}
			}
}
long chazhao4(Teacher *te,int te_num )
{
	int i;
	char str[20];
	printf("pur the name of the teacher you want to find!\n");
	scanf("%s",str);
	for(i=0;i<5;i++)
	{
		if(strcmp(str,te[i].name)==0)
		{
			printf("%s\t %d\t %d\n", te[i].name ,te[i].wage,te[i].bonus);
		
		}


	}


}
void Maxwage(Teacher *te,int te_num )
{
	int m=te_num;
	int i,p,temp=0;
	for(i=0;i<m;i++)
	{
		if(te[i].wage>temp)
		{temp=te[i].wage;
		p=i;}
	}
	printf("%s\t%d\n",te[p].name,te[p].wage);
}
void Maxbonus(Teacher *te,int te_num )
{
	int m=te_num;
	int i,temp=0,p;
	for(i=0;i<m;i++)
	{
		if(te[i].bonus>temp)
		{temp=te[i].bonus;
		p=i;}
	}
	printf("%s\t%d\n",te[p].name,temp);
}
void Max(Teacher *te,int te_num )
{
	int a,m=te_num,temp=0,d;
	int p[20];
	for(a=0;a<m;a++)
	{
		p[a]=(te[a].bonus+te[a].wage);

	}
	for(a=0;a<m;a++)
	{
		if(p[a]>temp)
		{
			d=a;
			temp=p[a];
		}
	}
		printf("%s\t%d\n",te[d].name,temp);
}


void main()
{
	int choice1,choice2,choice3,te_num; 
	Teacher  te[200];
	Menu1();
	while(12)
	{ 
		scanf("%d",&choice1);
		switch(choice1)
		{case 1:te_num= Init1(te);
		      printf("已录入%d位老师信息\n",te_num);
			  getchar();getch();
			  system("cls");
			  Menu1();
			  break;
        case 3:system("cls");
			Menu3();
			while(4)
			{
				scanf("%d",&choice3);
				switch(choice3)
				{
				case 1:
					Maxwage(te,te_num);
					getchar();getch();
					system("cls");
					break;
				case 2:
					Maxbonus(te,te_num);
					getchar();getch();
					system("cls");
					case 3:
					Max(te,te_num);//求总工资和奖金之和
					getchar();getch();
					system("cls");
				case 4:system("cls");
					getchar();
					Menu3();
					break;
				}
				
			}
			
			
			
		case 4:
			printf("得到信息如下所示\n");
			Init2(te);
			getchar();getch();
			system("cls");
			Menu1();
			break;
		case 5:puts("\t\t 记得下次再来哦!\n ");
			exit(0);
		case 2:system("cls"); 
			Menu2();
			while(9)
			{
				scanf("%d",&choice2);
				switch(choice2)
				{
				case 1: 
					chazhao1( te, te_num);
					getchar();getch();
					system("cls");
					break;
				case 2:
					chazhao2(te,te_num);
					getchar();getch();
					system("cls");
					break;
					
				case 3:
					chazhao3(te,te_num);
					getchar();getch();
					system("cls");
					break;
					case 4:
					chazhao4(te,te_num);
					getchar();getch();
					system("cls");
					break;
				case 5:system("cls");
					getchar();
					Menu2();
					break;
				}
			}
			
			
		}		 
		
		
		
	}
	
	
	
}