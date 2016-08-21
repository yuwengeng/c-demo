#include<stdio.h>
#include<string>
char str[20];
int s=0;
void E();
void G();
void T();
void S();
void F();
void E(){
	printf("E->TG\n");
	T();
	G();
}
void G(){
	if(str[s]=='+'||str[s]=='-'){
		if(str[s]=='+')
			printf("G->+TG\n");
		else
			printf("G->-TG\n");
		s++;
		T();
		G();}
	else
		printf("G->ε\n");
}
void T(){
	printf("T->FS\n");
	F();
	S();
}
void S(){
	if(str[s]=='*'||str[s]=='/'){
		if(str[s]=='*')
			printf("S->*FS\n");
		else
			printf("S->/FS\n");
		s++;
		F();
		S();}
	else
		printf("S->ε\n");
}
void F(){
	if (str[s]=='('){
		s++;
		E();
		if(str[s]==')'){
			printf("F->(E)\n");
			s++;}
		else{
			printf("\n该字符串不是合法符号串！\n");
			exit (0);}
	}
	else if(str[s]=='i'){
		printf("F->i\n");
		s++;}
	else{
		printf("\n该字符串不是合法符号串！\n");
		exit(0);}
}
void main()
{   printf("\n\n递归下降分析程序");
	printf("\n\n编制人:赵松波 1004014007 10计本2班");
	printf("\n\n请输入一以'#'结束的符号串:");
	gets(str);
	E();
	if(str[s]=='#')
	{

		printf("该符号串是合法符号串！\n");
	}
	else
	{

		printf("该符号串不是合法符号串！\n");
	}
}