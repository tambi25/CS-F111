#include <stdio.h>

int main()
{
    int num;
    int line,i;
    printf("enter a integer between 1 and 50\n");
    scanf("%d",&num);
    i=num/2;
    if (num>50)
        num=50;
        line =0;
        while(num > i)
        {
            if (line<10)
                line++;
            else
            {
                printf("\n");
                line=1;
            }
            
            printf("%3d",num--);
            
            }
            
        }
        
       
       

