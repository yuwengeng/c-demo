#include <stdio.h>
#include <string.h>
#define MAX 10
#define N 150
void SortString(char str[][MAX],int n);
int main()
{
	int i,n;
	char name[N][MAX];
	printf("How many countries?");
	scanf("%d",&n);
	getchar();
	printf("Input their names:\n");
	for(i=0;i<n;i++)
	{
		gets(name[i]);
	}

}

