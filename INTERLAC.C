#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int a,b,i,j;
clrscr();
printf("enter a and b");
scanf("%d",&a);
scanf("%d",&b);
i=a;j=b;
JUMP:
while(i<=b)
{
if(i%2!=0)
{
printf("%d ",i);
}
while(j>=a)
{
if(j%2==0)
{
printf("%d ",j);
i++;
j--;
goto JUMP;
}
else
{
j--;
i++;
goto JUMP;
}
}
}
getch();
}