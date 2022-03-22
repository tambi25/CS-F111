#include<stdio.h>
#include<math.h>
int fact(int p)
{
    if(p==1)
        return 1;
    else
       {
            int fact=1;
            for(int i=1;i<=p;i++)
            {
                fact = fact*i;
            }
            return fact;
       }
}
float calc(float x, int n, int p, int sign)
{   
    float sum=0;
    for(p=1;p<=n;p++)
    {
        if(p%2==0)
            sum=sum-(pow(x,2*p-1)/fact(2*p-1));
        else
            sum=sum+(pow(x,2*p-1)/fact(2*p-1));
    }
    return sum;
        
}
int main()
{
    float x,ans;
    int n;
    printf("\nEnter the values of x and n : ");
    scanf("%f %d",&x,&n);
    ans=calc(x,n,1,1);
    printf("\nOUTPUT :\nf(%f, %d) = %f",x,n,ans);
}
