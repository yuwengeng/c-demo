#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>
chacha(char num[]){
int i,key=1,flag=-1;
char num1[][10]={"int","if"};
char num2[][10]={"==","+","="};
char num3[][10]={"(",")","{","}",";",".",","};
char num4[10]={'1','2','3','4','5','6','7','8','9','0'};
for(i=0;i<2;i++)
{
if(strcmp(num,num1[i])==0)
  flag=1;
}
for(i=0;i<12;i++)
{
if(strcmp(num,num2[i])==0)
  flag=2;
}


for(i=0;i<12;i++)
{
if(strcmp(num,num3[i])==0)
  flag=3;
}
key=0;
for(int j=0;j<strlen(num);j++){
   for(i=0;i<10;i++)
   {
	if(num[j]==num4[i])
    key++;
   }
if(key==strlen(num))
   flag=4;
}
if(flag==-1)
 flag=5;
printf("(%s,%d)\n",num,flag);

return 0;
}
int main(void)
{   


	FILE * fp;                               /* 定义文件指针*/
   	long num;
	char strname1[20];
   	char stname[20];
   	int  score;
  	if((fp = fopen("f.txt", "r")) == NULL){	  /* 打开文件  */
   		printf("File open error!\n");
   		exit(0);
	}

    	while( !feof(fp) ){
         	fscanf(fp, "%s" ,stname);
			chacha(stname);
	};
    printf("\n");
    if( fclose(fp) ){			        	/* 关闭文件  */
        	printf( "Can not close the file!\n" );
       	exit(0);
    }

    if((fp = fopen("f.txt", "r")) == NULL){
	printf("File open error!\n");
	exit(0);}


}

