#include<stdio.h>
int main()
{
float num1,num2;

scanf("%f",&num1);
scanf("%f",&num2);
printf("ENTER FIRST NUMBER:%f\nENTER SECOND NUMBER:%f\n",num1,num2);
if (num1<num2) {printf ("RESULT:%f<%f",num1,num2); }
else
if (num1>num2) {printf ("RESULT:%f>%f",num1,num2); }
else
 {printf ("RESULT:%f==%f",num1,num2); }

return 0;
}