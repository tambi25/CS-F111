#include<stdio.h>
int main()
{
int u,t; float a,s;
scanf("%d",&u);
scanf("%d",&t);
scanf("%f",&a);
printf("ENTER SPEED:%d\n ENTER TIME:%d\nENTER ACCELERATION:%f\n",u,t,a);
s=(u*t)+1/2*a*t*t;
printf("THE DISTANCE IS :%f",s);
return 0;
}