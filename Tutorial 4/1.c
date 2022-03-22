#include<stdio.h>
int main()
{
long long a,b,c,n;
int i;
scanf("%lld %lld %lld",&a,&b,&n);
if(n==1)
       {printf("%lld\n",a);}
else
{
      printf("%lld  ",a);
      i=2;
           while(i<n)
           {
              c=a+b;
              if (i%2==0)
                 {printf("%lld ",c);}
            a=b;
            b=c;
            i++;
           }
}
}