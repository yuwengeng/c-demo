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
void Password();  //��������
void Zailu();   //���ļ��ж�ȡ����
int Menu();   //���˵�
int Menu2();  //����˵�
void Append();  //���ѧ����Ϣ
void Show();   //��ʾȫ��ѧ����Ϣ
void Search();   //����ѧ����Ϣ
void Delete();   //ɾ��ѧ����Ϣ
void Update();   //�޸�ѧ����Ϣ
void Sort();    //Ϊѧ����Ϣ��������
void Save();     //�洢ѧ����Ϣ
void Input(Person *p);   //����ѧ����Ϣ
void Printf(Person *p);   //���ȫ��ѧ����Ϣ
void Printf2(Person *p);  //���һ��ѧ����Ϣ

void SortName();   //��ѧ��������������
void SortNumber();   //��ѧ��ѧ�Ž�������

void Query(int flag);   
void Number_Query();   //��ѧ��ѧ�Ž��в���
void Name_Query();    //��ѧ���������в���
void Sex_Query();   //��ѧ���Ա���в���
void Age_Query();   //��ѧ��������в���
int Menu_Query();    //���Ҳ˵�


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
			printf("ллʹ�ã���ӭ�´�����......\n");
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
	printf("����������:");
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
			printf("\n��ӭ,��ӭ�����һ�ӭ......\n");
			getch();
			flag=1;
		}
		else
			printf("�����������������:");
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
	printf("��ȡ�ļ��ɹ��������������....");
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
	printf("�Ƿ������ӣ�Y������N���ز˵���");
	scanf(" %c",&ch);
	if(ch=='Y' || ch=='y')
		Append();
}


void Show()
{
	struct link *p=head;
	int i=0;
	if(head!=NULL)
		printf("����        �Ա�       ѧ��          ����     ��ַ\n");
	while(p!=NULL)
	{
		i++;
		Printf2(&(p->per));
		p=p->next;
	}
	if(i==0)
		printf("û�и�ѧ��\n");
	printf("\n�����������.....");
	getch();
}


void Delete()
{
	int flag=0;
	char ch;
    char mingzi[N];
	struct link *p=head,*pr=head;
	puts("������Ҫɾ����ѧ��������");
	scanf("%s",&mingzi);
	printf("ȷ��Ҫɾ���𣿣�Y�ǣ�N��");
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
			printf("δ�ҵ���ѧ��\n");

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
				printf("��ɾ����\n");
			}
		}
	}
	printf("\n�Ƿ����ɾ����(Y�ǣ�N���ز˵�):");
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
	printf("������Ҫ�޸ĵ�ѧ��������");
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
		printf("�޸�ѧ����");
	printf("�Ƿ�����޸ģ�Y�ǣ�N���ز˵���:");
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
	printf("����ɹ���\n");
	printf("�����������....");
	getch();
}


void Sort()
{
	int m=0;
	if(head==NULL)
	{
		printf("����Ϊ�գ��޷�����!\n");
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
				printf("�������!\n");
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
	printf("| �༶��������ϵͳ                                      |\n");		
	printf("+--------------------------------------------------------------+\n");		
	printf("| 1   ��ȡ�ļ�                                          |\n");		
	printf("| 2   ���                                              |\n");		
	printf("| 3   ����                                              |\n");		
	printf("| 4   ɾ��                                              |\n");		
	printf("| 5   �޸�                                              |\n");		
	printf("| 6   ����                                              |\n");		
	printf("| 7   ��ʾ����ѧ��                                      |\n");		
	printf("| 8   ����                                              |\n");		
	printf("| 9  �˳�ϵͳ                                           |\n");		
	printf("+==============================================================+\n");
	printf(">��ѡ��[1-9]:");
	scanf("%d",&select);
	while(!(select<11 && select>0))
	{
		printf("����������������룺");
		scanf("%d",&select);
	}
	return select;
}


void Input(Person *p)
{
	printf("������������");
	scanf("%s",&(p->name));
	printf("�������Ա�(��n,Ův)��");
	scanf(" %c",&(p->sex));
	printf("������ѧ��(9λ����)��");
	scanf("%ld",&p->num);
	printf("����������:");
	scanf("%d",&p->age);
	printf("�������ַ��");
	scanf("%s",&(p->address));
}

void Printf(Person *p)
{
	printf("������%s\t�Ա�%c\tѧ�ţ�%ld\t\n",p->name,p->sex,p->num);
	printf("����:%d\t��ַ:%s\n",p->age,p->address);
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
	printf("| �༶��������ϵͳ              |\n");		
	printf("+--------------------------------------+\n");		
	printf("| 1   ����������              |\n");		
	printf("| 2   ��ѧ������              |\n");		
	printf("| 3   �˳�����                |\n");		
	printf("+=========================================+\n");
	printf(">��ѡ��[1-3]:");
	scanf("%d",&select);
	while(!(select<4 && select>0))
	{
		printf("����������������룺");
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
	printf("����ɹ��������������....");
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
	printf("����ɹ��������������....");
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
		   printf("�������!\n");
		   break;
	   }
	}
}

int Menu_Query()
{
	int select;	
	system("cls");
	printf("+==============================================================+\n");
	printf("| �༶��������ϵͳ                                         |\n");	
	printf("+--------------------------------------------------------------+\n");	
	printf("| 1   ��ѧ�Ų�ѯ                                           |\n");	
	printf("| 2   ��������ѯ                                           |\n");	
	printf("| 3   ���Ա��ѯ                                           |\n");	
	printf("| 4   �������ѯ                                           |\n");	
	printf("| 5   �˳���ѯ                                             |\n");	
	printf("+==============================================================+\n");	
	printf(">��ѡ��[1-5]:");
	scanf("%d",&select);
	while(!(select<6 && select>0))
	{
		printf("����������������룺");
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
	printf("������Ҫ���ҵ�ѧ����");
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
	printf("������Ҫ���ҵ�ѧ�ţ�");
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
	printf("������Ҫ���ҵ��Ա�");
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
		printf("δ�ҵ�ѧ��\n");
	printf("\n�����������....");
	getch();
}

void Age_Query()
{
	int flag=0,nl;
	struct link *p=head;
	printf("������Ҫ���ҵ����䣺");
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
		printf("δ�ҵ���ѧ��\n");
	printf("\n�����������....");
	getch();
}

void Query(int flag)
{
	if(!flag)
		printf("δ�ҵ���ѧ��\n");
	printf("\n�Ƿ�������ң���Y������N���ز˵���");
}