/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,row,col;
    printf("enter a number between 1 and 9\n");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
     for(col=1;col<=n;col++)
     
         if(row>col)
            printf("#");
         else
         printf("%d",col);
    printf("\n");
     
    }
    return 0;
}
