#include <stdio.h>
void main()
{
	int i=1,m,n,zg;
	do{
	printf("�������������:");
	scanf("%d%d",&m,&n);
    
	zg=(m*i)%n;
	i++;
	}while(zg=0);
	printf("��С������Ϊ:%d\n",m*i);
}
