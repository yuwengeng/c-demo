#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define N 29
#define MAX_NAME 29
#define MAX_ADDRESS 29
#define MAX_PASSWORD 29

typedef struct person
{
	char name[MAX_NAME];
	char sex;
	long num;
	int age;
	char address[MAX_ADDRESS];
}Person;

typedef struct link
{
	Person per;
	struct link *next;
}link;

int color();
void Password();  //输入密码
void Zailu();   //从文件中读取数据
int Menu();   //主菜单
int Menu2();  //排序菜单
void Append();  //添加学生信息
void Show();   //显示全部学生信息
void Search();   //查找学生信息
void Delete();   //删除学生信息
void Update();   //修改学生信息
void Sort();    //为学生信息进行排序
void Save();     //存储学生信息
void Input(Person *p);   //输入学生信息
void Printf(Person *p);   //输出全部学生信息
void Printf2(Person *p);  //输出一个学生信息

void SortName();   //按学生姓名进行排序
void SortNumber();   //按学生学号进行排序

void Query(int flag);   
void Number_Query();   //按学生学号进行查找
void Name_Query();    //按学生姓名进行查找
void Sex_Query();   //按学生性别进行查找
void Age_Query();   //按学生年龄进行查找
int Menu_Query();    //查找菜单


struct link *head=NULL;

void main()
{
	int color();
	Password();
	while(1)
	{
		switch(Menu())
		{
		case 1:
			Zailu();
			break;
		case 2:
			Append();
			break;
		case 3:
			Search();
			break;
		case 4:
			Delete();
			break;
		case 5:
			Update();
			break;
		case 6:
			Sort();
			break;
		case 7:
			Show();
			break;
		case 8:
			Save();
			break;
		case 9:
			printf("谢谢使用！欢迎下次再来......\n");
			exit(0);
		default:
			printf("error\n");
			break;
		}
	}
}

int color()
{
    system("color A4");
    return 0;
}

void Password()
{
	char password[MAX_PASSWORD],pw[9]="920";
	int flag=0,i,j;
	j=strlen(pw);
	printf("请输入密码:");
	while(flag==0)
	{
		for(i=0;i<j;i++)
		{
			password[i]=getch();
			printf("*");
		}
		password[i]='\0';
		if(strcmp(password,pw)==0)
		{
			printf("\n欢迎,欢迎，热烈欢迎......\n");
			getch();
			flag=1;
		}
		else
			printf("密码错误，请重新输入:");
	}
}

void Zailu()
{
	FILE *fp;
	struct link *p=head,*p1=NULL;
	fp=fopen("dangan.txt","r");
	while(!feof(fp))
	{
		p1=(struct link *)malloc(sizeof(struct link));
		p1->next=NULL;
		if(head==NULL)
			head=p1;
		else
			p->next=p1;
		p=p1;
		fscanf(fp,"%s %c %ld",p->per.name,&p->per.sex,&p->per.num);
		fscanf(fp,"%d%s",&p->per.age,&p->per.address);
	}
	fclose(fp);
	printf("读取文件成功！按任意键继续....");
	getch();
}

void Append()
{
	struct link *p=NULL,*pr=head;
	char ch;
	p=(struct link *)malloc(sizeof(struct link));
	p->next=NULL;
	if(head==NULL)
		head=p;
	else
	{
		while(pr->next!=NULL)
		{
			pr=pr->next;
		}
		pr->next=p;
	}
	Input(&(p->per));
	printf("是否继续添加（Y继续，N返回菜单）");
	scanf(" %c",&ch);
	if(ch=='Y' || ch=='y')
		Append();
}


void Show()
{
	struct link *p=head;
	int i=0;
	if(head!=NULL)
		printf("姓名        性别       学号          年龄     地址\n");
	while(p!=NULL)
	{
		i++;
		Printf2(&(p->per));
		p=p->next;
	}
	if(i==0)
		printf("没有该学生\n");
	printf("\n按任意键继续.....");
	getch();
}


void Delete()
{
	int flag=0;
	char ch;
    char mingzi[N];
	struct link *p=head,*pr=head;
	puts("请输入要删除的学生姓名：");
	scanf("%s",&mingzi);
	printf("确定要删除吗？（Y是，N否）");
	scanf(" %c",&ch);
	if(ch=='y' || ch=='Y' )
	{
		while(p!=NULL)
		{
			if(strcmp(p->per.name,mingzi)==0)
			{
				Printf(&(p->per));
				flag=1;
				break;
			}
			p=p->next;			
		}
		if(!flag)
			printf("未找到该学生\n");

		else
		{	
			if(p==head)
		    	head=p->next;
			else
			{
				while(pr->next!=NULL)
				{				
					if(pr->next==p)
					{
						pr->next=p->next; 
						break;
					}
					pr=pr->next;
				}
				free(p);
				printf("已删除！\n");
			}
		}
	}
	printf("\n是否继续删除？(Y是，N返回菜单):");
	scanf(" %c",&ch);
	if(ch=='y' || ch=='Y')
		Delete();
}

void Update()
{
	int flag=0;
	char mingzi[N],ch;
	struct link *p=head;
	Password();
	printf("请输入要修改的学生姓名：");
	scanf("%s",&mingzi);
	while(p!=NULL)
	{
		if(strcmp(p->per.name,mingzi)==0)
		{
			flag=1;
			break;
		}
		p=p->next;
	}
	if(flag)
		Input(&(p->per));
	else
		printf("无该学生！");
	printf("是否继续修改（Y是，N返回菜单）:");
	scanf(" %c",&ch);
	if(ch=='y' || ch=='Y')
		Update();
}

void Save()
{
	FILE *fp;
	struct link *p=head;
	fp=fopen("dangan.txt","r+");
	while(p!=NULL)
	{
		fprintf(fp,"\n%-6s\t%3c\t%-9ld\t",p->per.name,p->per.sex,p->per.num);
		fprintf(fp,"%5d",p->per.age);
		fprintf(fp,"%9s",p->per.address);
		p=p->next;
	}
	fclose(fp);
	printf("保存成功！\n");
	printf("按任意键结束....");
	getch();
}


void Sort()
{
	int m=0;
	if(head==NULL)
	{
		printf("数据为空，无法排序!\n");
		getch();
	}
	else
	{
		while(m!=3)
		{	
			m=Menu2();
			switch(m)
			{
			case 1:
				SortName();
				break;
			case 2:
				SortNumber();
				break;
			case 3:
				break;
			default:
				printf("输入错误!\n");
				break;		
			}
		}
	}
}

int Menu()
{
	int select;		
	system("cls");
	printf("+==============================================================+\n");	
	printf("| 班级档案管理系统                                      |\n");		
	printf("+--------------------------------------------------------------+\n");		
	printf("| 1   读取文件                                          |\n");		
	printf("| 2   添加                                              |\n");		
	printf("| 3   查找                                              |\n");		
	printf("| 4   删除                                              |\n");		
	printf("| 5   修改                                              |\n");		
	printf("| 6   排序                                              |\n");		
	printf("| 7   显示所有学生                                      |\n");		
	printf("| 8   保存                                              |\n");		
	printf("| 9  退出系统                                           |\n");		
	printf("+==============================================================+\n");
	printf(">请选择[1-9]:");
	scanf("%d",&select);
	while(!(select<11 && select>0))
	{
		printf("输入错误，请重新输入：");
		scanf("%d",&select);
	}
	return select;
}


void Input(Person *p)
{
	printf("请输入姓名：");
	scanf("%s",&(p->name));
	printf("请输入性别(男n,女v)：");
	scanf(" %c",&(p->sex));
	printf("请输入学号(9位以下)：");
	scanf("%ld",&p->num);
	printf("请输入年龄:");
	scanf("%d",&p->age);
	printf("请输入地址：");
	scanf("%s",&(p->address));
}

void Printf(Person *p)
{
	printf("姓名：%s\t性别：%c\t学号：%ld\t\n",p->name,p->sex,p->num);
	printf("年龄:%d\t地址:%s\n",p->age,p->address);
}

void Printf2(Person *p)
{
	printf("%-6s       %3c      %-9ld  %7d    %-9s\n",p->name,p->sex,p->num,p->age,p->address);
}

int Menu2()
{
	int select;			
	system("cls");
	printf("+==========================================+\n");	
	printf("| 班级档案管理系统              |\n");		
	printf("+--------------------------------------+\n");		
	printf("| 1   按姓名排序              |\n");		
	printf("| 2   按学号排序              |\n");		
	printf("| 3   退出排序                |\n");		
	printf("+=========================================+\n");
	printf(">请选择[1-3]:");
	scanf("%d",&select);
	while(!(select<4 && select>0))
	{
		printf("输入错误，请重新输入：");
		scanf("%d",&select);
	}
	return select;
}

void SortName()
{
	struct link *p=head,*pr=NULL;
    struct link *p1=NULL;
	p1=(struct link *)malloc(sizeof(struct link));
	for(;p!=NULL;p=p->next)
		for(pr=p->next;pr!=NULL;pr=pr->next)
		{
			if(strcmp(p->per.name,pr->per.name)>0)
			{
				p1->per=pr->per;
				pr->per=p->per;
				p->per=p1->per;
			}
		}
	printf("排序成功！按任意键返回....");
	getch();
}

void SortNumber()
{
	struct link *p=head,*pr=NULL;
    struct link *p1=NULL;
	p1=(struct link *)malloc(sizeof(struct link));
	for(;p!=NULL;p=p->next)
		for(pr=p->next;pr!=NULL;pr=pr->next)
		{
			if(p->per.num>pr->per.num)
			{
				p1->per=pr->per;
				pr->per=p->per;
				p->per=p1->per;
			}
		}
	printf("排序成功！按任意键返回....");
	getch();
}

void Search()
{	
    int m=0;
	while(m!=5)
	{
		m=Menu_Query();
       switch(m)
	   {
	   case 1:
		   Number_Query();
		   break;
	   case 2:
		   Name_Query();
           break;
	   case 3:
		   Sex_Query();
		   break;
	   case 4:
		   Age_Query();
		   break;
	   case 5:
		   break;
	   default:
		   printf("输入错误!\n");
		   break;
	   }
	}
}

int Menu_Query()
{
	int select;	
	system("cls");
	printf("+==============================================================+\n");
	printf("| 班级档案管理系统                                         |\n");	
	printf("+--------------------------------------------------------------+\n");	
	printf("| 1   按学号查询                                           |\n");	
	printf("| 2   按姓名查询                                           |\n");	
	printf("| 3   按性别查询                                           |\n");	
	printf("| 4   按年龄查询                                           |\n");	
	printf("| 5   退出查询                                             |\n");	
	printf("+==============================================================+\n");	
	printf(">请选择[1-5]:");
	scanf("%d",&select);
	while(!(select<6 && select>0))
	{
		printf("输入错误，请重新输入：");
		scanf("%d",&select);
	}
	return select;
}

void Name_Query()
{
	int flag=0;
	char ch;
    char mingzi[N];
	struct link *p=head;
	printf("请输入要查找的学生：");
	scanf("%s",&mingzi);
	while(p!=NULL)
	{
		if(strcmp(p->per.name,mingzi)==0)
		{
			Printf(&(p->per));
			flag=1;
			break;
		}
		p=p->next;			
	}
	Query(flag);
	scanf(" %c",&ch);
	if(ch=='y' || ch=='Y')
		Name_Query();

}


void Number_Query()
{
	int flag=0;
	long number;
	char ch;
	struct link *p=head;
	printf("请输入要查找的学号：");
	scanf("%ld",&number);
	while(p!=NULL)
	{
		if(p->per.num==number)
		{
			Printf(&(p->per));
			flag=1;
			break;
		}
		p=p->next;			
	}
	Query(flag);
	scanf(" %c",&ch);
	if(ch=='y' || ch=='Y')
		Number_Query();

}

void Sex_Query()
{
    int flag=0;
	char s;
	struct link *p=head;
	printf("请输入要查找的性别：");
	scanf(" %c",&s);
	while(p!=NULL)
	{
		if(p->per.sex==s)
		{
			Printf(&(p->per));
			flag=1;
		}
		p=p->next;			
	}
	if(!flag)
		printf("未找到学生\n");
	printf("\n按任意键返回....");
	getch();
}

void Age_Query()
{
	int flag=0,nl;
	struct link *p=head;
	printf("请输入要查找的年龄：");
	scanf(" %d",&nl);
	while(p!=NULL)
	{
		if(p->per.age==nl)
		{
			Printf(&(p->per));
			flag=1;
		}
		p=p->next;			
	}
	if(!flag)
		printf("未找到该学生\n");
	printf("\n按任意键返回....");
	getch();
}

void Query(int flag)
{
	if(!flag)
		printf("未找到该学生\n");
	printf("\n是否继续查找？（Y继续，N返回菜单）");
}