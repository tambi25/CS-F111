#include<stdio.h>
#include<math.h>
int main()
{
   int a , b;
   printf("Enter two integers:\n");
   scanf("%d %d",&a,&b);
   (a>b) ? printf("max is %d\nmin is %d",a,b) : printf("max is %d\nmin is %d",b,a);
    return 0;
}