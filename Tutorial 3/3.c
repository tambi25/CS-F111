#include <stdio.h>
#include <math.h>
int main()
{
    int rem , bin = 0 , i = 1 , n , b =0 , complement;
    printf("\nEnter a decimal number: ");
    scanf("%d" , &n);
    while(n > 0)
    {
        rem = n%2;
        bin = bin + rem*i;
        i = i *10;
        n = n/2;
    }

    printf("\nThe binary equivalent is %d" , bin);

   while (bin != 0) {
        bin /= 10;
        b++;
    }
    printf("\nNumber of binary digits are: %d " , b);

    complement = (pow(2,b) - 1) - n;
    printf("the 1's compliment is",complement);
    return 0;
}