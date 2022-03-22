#include<stdio.h>
 
void main()
{
    int n,reverseNum=0,rem,originalNum;
 
    printf("Enter a number\n");
    scanf("%d",&n);
 
    originalNum=n;
  
    while(n!=0)
    {
        rem=n%10;
        reverseNum=reverseNum*10 + rem;
        n=n/10;
    }
    if (originalNum==reverseNum)
    {
        printf("%d is a palindrome\n",originalNum);
    }
    else
    {
        printf("%d is not a palindrome\n",originalNum);
    }
}
