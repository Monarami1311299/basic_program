#include<stdio.h>
struct t
{
int roll;
char name[8];
float per;
};

main()
{
struct t v[2];
int i;
for(i=0;i<2;i++)
printf("%d\n",sizeof(v[i]));
}
