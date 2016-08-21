#include <stdio.h>
void main()
{
	int i=2,n;
    do{ 
		printf("请输入一个正整数n:");
	    scanf("%d",&n);
		i++;
		if (n%i==0)
			printf("n不是素数\n");
			}while (i<n);
    printf("n是素数\n");
	getchar;


}