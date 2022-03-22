#include <stdio.h>
int main()
{ 
    int countA , countC ;
    countA=countC = 0 ;
    char ch;
    printf ( "enter the character \n");
    scanf("%c",&ch);
    switch (ch)
    { 
        case 0: ch=='a'||ch=='A'? countA++ : ch=='c'||ch=='C'? countC++ : printf("\n error ");
        break;
        default: printf ("\n error ");
    }
    return 0 ;
}
