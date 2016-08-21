#include<stdio.h>
void main()
{
	int score;
	printf("Please input score:");
	scanf("%d",&score);
	if(score<=100&&score>=90)
		printf("%d----A\n",score);
 else if(score<90&&score>=80)
		printf("%d----B\n",score);
else if(score<80&&score>=70)
		printf("%d----C\n",score);
else if(score<70&&score>=60)
		printf("%d----D\n",score);
else if(score<60&&score>=0)
		printf("%d----E\n",score);
else
printf("data error!Please input again\n");
}

