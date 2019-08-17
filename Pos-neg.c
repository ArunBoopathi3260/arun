#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf(" enter the number \n ");
scanf("%d",&num);
if(num>0)
{
printf("given num is positive \n ",num) ;
}
else if(num<0)
{
printf("givee number is negative \n ", num);
}
else{
printf("given num is zero",num);
}
getch();
}
