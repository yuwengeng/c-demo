#include <stdio.h>
void main()
{
	int i=1,m,n,zg;
	do{
	printf("请输入二个整数:");
	scanf("%d%d",&m,&n);
    
	zg=(m*i)%n;
	i++;
	}while(zg=0);
	printf("最小公倍数为:%d\n",m*i);
}
