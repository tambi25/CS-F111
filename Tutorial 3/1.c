#include <stdio.h>
int main () {
char vowel;
printf("\nEnter a vowel: ");
scanf("%c", &vowel);
switch(vowel) {
case 'a' :
printf("\nYou entered the first vowel which is %c!\n", vowel);
case 'A' :
printf("\nYou entered the first vowel which is %c!\n", vowel);
break;
case 'e' :
printf("\nYou entered the first vowel which is %c!\n", vowel);

case 'E' :
printf("\nYou entered the first vowel which is %c!\n", vowel);
break;
case 'i' :
printf("\nYou entered the first vowel which is %c!\n", vowel);

case 'I' :
printf("\nYou entered the first vowel which is %c!\n", vowel);
break;
case 'o' :
printf("\nYou entered the first vowel which is %c!\n", vowel);

case 'O' :
printf("\nYou entered the first vowel which is %c!\n", vowel);
break;
case 'u' :
printf("\nYou entered the first vowel which is %c!\n", vowel);

case 'U' :
printf("\nYou entered the first vowel which is %c!\n", vowel);
break;
default :
printf ("\n%c is not a vowel\n",vowel);
}
printf("\n=====Thank you=====\n");
return 0;
}