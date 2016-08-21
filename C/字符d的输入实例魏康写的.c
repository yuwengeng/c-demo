#include "stdio.h"
void main()
{
	/*char name[30];
	char*pname=name;
	printf("put a name\n");
	gets(pname);
	printf("hello i said to %s",pname);*/
//	char name[30];
//	printf("put a name\n");
//	scanf("%s",name);
//	printf("hello i said to %s",name);
	char name[30];
	char*pname ="\"hallo\",I said to";
	printf("put a name\n");
	fgets(name,sizeof(name),stdin);
	printf("%s%s\n",pname,name);

}
