#include<stdio.h>
#include<conio.h>
coid main()
{
int n,a,b,i;
scanf("%d",&n);
while(n>0)
{
scanf("%d %d",&a,&b);
for(i=a;i<b;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
n--;
}
getch();
}
