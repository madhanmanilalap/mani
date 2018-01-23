#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter \n\n\n a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b>c)
printf("a is larger");
if(b>a>c)
printf("b is larger");
if(c>a>b)
printf("c is larger");
getch();
}
