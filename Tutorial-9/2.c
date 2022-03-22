#include<stdio.h>
int main()
{    int n,i=0,j=0;
    printf("enter the count of  numbers : ");
    scanf("%d",&n);
    int a[n];
    while(i<n)
    {
        scanf("%d",&a[i]);
        i++;
    }
    i=0;
    while(i<n-1)
    {
      
        while(j<n-i-1)
        {
            if(a[j]>a[j+1])
            {
                a[j+1]=a[j+1]+a[j];
                a[j]=a[j+1]-a[j];
                a[j+1]=a[j+1]-a[j];
            }
            j++;
            
        }
        j=0;
        i++;
    }
    printf("output\nIn ascending order");
    i=0;
    while(i<n)
    {
        printf(" %d ",a[i]);
        
        i++;
    }
    
}
