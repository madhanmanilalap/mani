#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
printf("enter The character",a);
scanf("%c",&a);
if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
printf("Alphbet");
else
printf("Number");
getch();
}
