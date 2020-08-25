#include<stdio.h>
#include<stdlib.h>
char* fun(char *p)
{
	p=(char*)malloc(10);
	return p;
}


int main() 
{
	char *p=NULL;
	fun(p);
	*p=12;
	printf("%d\n",*p);
}
