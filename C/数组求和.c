#include <stdio.h>
int main()
{
  int score[10];
  int total=0;
  int i;
  printf("Input.....");
  for(i=0;i<10;i++)
{
	scanf("%d",&score[i]);
total=total+score[i];
}
printf("total=%d\n",total);
return 0;

}