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
	puts("\t\t-----��ӭ����ѧ���ɼ�����ϵͳ-----");
	puts("\t\t         1----��������Դ");
	puts("\t\t         2----�ɼ�����");
	puts("\t\t         3----��ѯ");
	puts("\t\t         4----���");
	puts("\t\t         5----�˳�");
	puts("\t\t    ��ѡ�񡭡�");
}
void  Menu2()  //
{
	puts("\t\t-----��ӭ����ѧ���ɼ�������ϵͳ-----");
	puts("\t\t         1---��ѧ��");
        puts("\t\t         2---��ѧ��");
        puts("\t\t         3---����");
	puts("\t\t         ��ѡ�񡭡�");
}
void  Menu3()
{
	puts("\t\t-----��ӭ�����ѯ��ϵͳ-----");
	puts("\t\t         1---��������ѯ");
    puts("\t\t         2---��ѧ�Ų�ѯ");
	puts("\t\t         3---��ʡ�ݲ�ѯ");
    puts("\t\t         4---����");
	puts("\t\t    ��ѡ�񡭡�");
}
int   Init(ST  *st)
{int n=0,i;
  char  line[90];
 FILE   *fp;
 fp=fopen("ѧ���ɼ���.txt","r+");
 fgets(line,80,fp);//������һ�еı���

 while(!feof(fp))
 {
  fscanf(fp,"%s%s%s",st[n].no,st[n].name,st[n].province);
  for(i=0;i<3;i++)
      fscanf(fp,"%f",&st[n].score[i]);
  n++;
 }
 
 return  n-1;     
}
void Dis_stu(ST  *st)//���ĳλͬѧ����Ϣ
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
puts("ѧ  ��  	 �� ��	ʡ��   C����   ����    ����");
printf("%dλѧ����Ϣ��\n",n);
   
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
            printf("¼��%dλѧ����Ϣ",stu_num);
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
		  {case 1:puts("������ѧ�Ʊ��");
		          scanf("%d",&course_no);
		          printf("����ƽ���ɼ�Ϊ��%.2f\n",
			        Ave_course(stu,course_no,stu_num));
				  getchar();getch();
	              system("cls")
	               Menu2();
				  break;
		  case  2:puts("������ѧ��ѧ��");
		          getchar();
			      scanf("%s",stu_no);
				  for(i=0;i<stu_num;i++)
					  if(strcmp(stu[i].no,stu_no)==0)
					  { Dis_stu(&stu[i]);break;}
		          printf("\n����ƽ���ɼ�Ϊ��%.2f\n",
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
    case 3:system("cls");//��ѯ����
		  Menu3();
		  while(8)
		  {
		  scanf("%d",&choice3);
          switch(choice3)
		  {case 1:puts("������ѧ�Ʊ��");
		          scanf("%d",&course_no);
		          printf("����ƽ���ɼ�Ϊ��%.2f\n",
			        Ave_course(stu,course_no,stu_num));
				  getchar();getch();
	              system("cls");
	               Menu2();
				  break;
		  case  2:puts("������ѧ��ѧ��");
		          getchar();
			      scanf("%s",stu_no);
				  for(i=0;i<stu_num;i++)
					  if(strcmp(stu[i].no,stu_no)==0)
					  { Dis_stu(&stu[i]);break;}
		          printf("\n����ƽ���ɼ�Ϊ��%.2f\n",
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
    /*  case 4:printf("��ͬѧ����߳ɼ�Ϊ��%.2f\n",Max_score());
		getchar();getch();
		system("cls");
		Menu();
		break;
	 case 5:printf("��ͬѧ����ͳɼ�Ϊ��%.2f\n",Min_score());
		getchar();getch();
		system("cls");
		Menu();
		break;*/
     case 4:
		 puts("\t\t��Ϣ���£�");
		 Display(stu,stu_num);
		getchar();getch();
		system("cls");
		Menu1();
		break;
	 case 5:puts("\t\t��ӭ�´ι��� ");exit(0);
	}
}
}