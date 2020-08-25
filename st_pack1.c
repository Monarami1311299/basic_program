#include<stdio.h>
#pragma pack(1)
struct t
{
	int a; //1*4
	char b;//1*1
	char d;//1*1
}v;

main()
{
	printf("%d\n",sizeof(v));
}
