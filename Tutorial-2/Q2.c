#include<stdio.h>
int main()
{
int num1, num2;

scanf("%d",&num1);
scanf("%d",&num2);
printf("ENTER FIRST INTEGER:%d\nENTER SECOND INTEGER:%d\n",num1,num2);
if(num1 > num2)
{
printf("LARGEST:%d",num1);
}
else
{ printf("LARGEST%d",num2);}
return 0;
}