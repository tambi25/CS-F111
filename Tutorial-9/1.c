#include <stdio.h>
int main()
{
   int arr[10],i,num,pos,n,c=0;
   printf("ENTER THE SIZE OF ARRAY:");
   scanf("%d",&n);
   printf("\n Enter array elements:");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("Enter the number to be searched:");
   scanf("%d",&num);
   for(i=0;i<n;i++)
   if(arr[i]==num)
   {
       c=c+1;
       pos=i+1;
       printf("%d found at %d position",num,pos);
       printf("\n");
   }
   if(c==0)
   printf("\nNumber not found..!\n!");
   else
  
   printf("\n%d has occured %d times",num,c);
   return 0;
}
