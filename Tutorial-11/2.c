#include <stdio.h>
#include <string.h>
void reverse(char arr[],int n,int i)
{
    if(i==n/2)
       return;         
    int t;
    t=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=t;
    reverse(arr,n,i+1);
}
int main()
{
    int i=0,n=0;
    char str[3000];
    char ch;
    printf("\nEnter the string of characters : ");
    scanf("%c",&ch);
    while(ch!='\n'){
        str[i]=ch;
        scanf("%c",&ch);
        n++;i++;
    }
    reverse(str,n,0);
    printf("\nOUTPUT : ");
    for(i=0;i<n;i++)
          printf("%c",str[i]);
    printf("\n");
}
