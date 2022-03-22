#include <stdio.h>
#include <string.h>
int main()
{
    char str[3000];
    char temp, *right, *left;
    printf("Enter the string : ");
    scanf("%s",str);
    left = str;
    right = str + strlen(str)-1;
    while(right>left)
    {
        temp=*right;
        *right=*left;
        *left=temp;
        left++;
        right--;
    }
    printf("The reversed string is : %s\n",str);
  
}
