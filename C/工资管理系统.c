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
	puts("\t\t-----��ӭ�����ʦ���ʹ���ϵͳ-----");
	puts("\t\t         1----��������Դ");
	puts("\t\t         2----��ѯ");
	puts("\t\t         3----����");
	puts("\t\t         4----���");
	puts("\t\t         5----�˳�");
	puts("\t\t    ��ѡ�񡭡�");
}
void  Menu2()  
{
	puts("\t\t-----��ӭ�����ʦ���ʼ�����ϵͳ-----");
	puts("\t\t         1---�����");
	puts("\t\t         2---������");
	puts("\t\t         3---���Ա�");
	puts("\t\t         4---������");
	puts("\t\t         5---����");
	puts("\t\t    ��ѡ�񡭡�");
}
void  Menu3()  
{
	puts("\t\t-----��ӭ�����ʦ���ʼ�����ϵͳ-----");
	puts("\t\t         1---�������");
	puts("\t\t         2---����߽���");
	puts("\t\t         3---������ܹ���");
	puts("\t\t         4---����");
	puts("\t\t    ��ѡ�񡭡�");
}
int   Init1(Teacher  *te)
{
	int n=0;
	FILE *fp;
	fp=fopen("d://����.txt","r+");
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
	fp=fopen("d://����.txt","r+");
	while(!feof(fp))
	{
		fscanf(fp,"%ld%s%s %c%d%d%d",&te[n].ID,te[n].subject,te[n].name,&te[n].sex,&te[n].age,&te[n].wage,&te[n].bonus);
		n++;
	}
	n--;
	printf("���    ��Ŀ     ����     sex   ����     ����     ����\n");
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
	printf("����������Ҫ��ѯ����ʦ�ı��!\n");
	scanf("%ld",&p);
	printf("���    ��Ŀ     ����     sex   ����     ����     ����\n");
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
	printf("����������Ҫ��ѯage!\n");
	scanf("%d",&p);
	printf("���    ��Ŀ     ����     sex   ����     ����     ����\n");
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
	printf("����������Ҫ��ѯ�������ԡ�2���Ļ���Ů�Ե���ʦ��1��!\n");
	scanf("%d",&p);
	printf("����     ����    ����\n");
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
		      printf("��¼��%dλ��ʦ��Ϣ\n",te_num);
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
					Max(te,te_num);//���ܹ��ʺͽ���֮��
					getchar();getch();
					system("cls");
				case 4:system("cls");
					getchar();
					Menu3();
					break;
				}
				
			}
			
			
			
		case 4:
			printf("�õ���Ϣ������ʾ\n");
			Init2(te);
			getchar();getch();
			system("cls");
			Menu1();
			break;
		case 5:puts("\t\t �ǵ��´�����Ŷ!\n ");
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