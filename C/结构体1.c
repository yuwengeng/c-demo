#include "stdio.h"
#include  "stdlib.h"
void main()
{char  name[20];//"d:\\abc.txt"
 FILE  *fp,*fp1;
 /*puts("输入文件名");
 gets(name);//name[20]
 fp=fopen(name,"w+");//r+   a+
 fputs("HFUU",fp);//puts("Hfuu");
 fprintf(fp,"510--88888888=%d\n",45+58);
*/

 int n=0,i=0,j,temp,a[200];
 fp=fopen("d:\\abc.txt","r+");
 while(!feof(fp))//for(i=0;i<6;i++)
 {
   fscanf(fp,"%d",&a[n]);
   n++;
 }
 printf("n=%d\n",n);
 n--;
for(i=0;i<n-1;i++)
 {
 for(j=i+1;j<n;j++)
 {
 if(a[i]<a[j])
 {
 temp=a[i];
a[i]=a[j];
a[j]=temp;
 }
 
 }
 }
 
 
 fclose(fp);
 fp1=fopen("d:\\abc.txt","a+");
 for(i=0;i<n;i++)
 {
 fprintf(fp1,"%d\t",a[i]);
 }
 fclose(fp1);

}