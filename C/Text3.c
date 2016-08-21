#include<stdio.h>
#include<math.h>
#include<string.h>
void dtox(double num,int jz)
{
	char xnum[100];
	int dnum=(int) num;
	int i=0,j=0,e = 0;
	while(dnum>=jz)
	{
		xnum[j++]=dnum%jz+48;
		dnum=dnum/jz;
	}
	xnum[j] = dnum+48;
	for(i = j;i>=0;i--){
		printf("%c",xnum[i]);
	}
	if(dnum - num != 0){
		printf(".");
		num = num - (int)num;
		do
		{
			e++;
			printf("%c",(int)(num*jz)+48);
			num = num*jz-(int)(num*jz);
			if(num == 0)break;
		}
		while(e<20);
	}
}
double xtod(char num[],int jz)
{
	double dnum = 0;
	int i,j,k=0,n=0,b;
	for(i=0;;i++)
	{
		if(num[i]=='\0')break;
		else n++;
		if(num[i]=='.'){j=i;k=1;}
	}
	for(i=j-1;i>=0;i--)
	{
		dnum =dnum + (double)(num[j-i-1]-48)*pow(jz,i);
	}
	if(k==1)
	{
		for(i=j+1;i<n;i++)
		{
			if(num[i]=='A') b=10;
            else if(num[i]=='B') b=11;
            else if(num[i]=='C') b=12;
            else if(num[i]=='D') b=13;
            else if(num[i]=='E') b=14;
            else if(num[i]=='F') b=15;
            else b=num[i]-'0';
			dnum=dnum+b*pow(jz,-(i-j));
		}
	}
	return dnum;
	
}
void main()
{
	char num[100];
	double dnum;
	int jz1,jz2;
	printf("input one data\n");
	scanf("%s",num);
    printf("输入数为几进制\n");
	scanf("%d",&jz1);
	printf("转换为几进制\n
		");
	scanf("%d",&jz2);
    dtox(xtod(num,jz1),jz2);
}
