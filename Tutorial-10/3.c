#include<stdio.h>
char* my_strcpy(char* destination, char* source)
{
int i;
for(i=0;source[i]!='\0';i++)
{
destination[i]=source[i];
}
destination[i]='\0'; //copies the null char
return destination;
}
int my_strlen(const char*s)
{
int n=0;
for(int i=0;s[i]!='\0';i++)
n++;
return n;
}
char* my_strcat(char* destination, char* source)
{
int i;
int n=my_strlen(destination);
destination[n]= 'X' ;
for(i=1;i<my_strlen(source);i++)
destination[n+i]=source[i-1];
destination[n+i]='\0';
return destination;
}
int my_strcmp(const char* s1, const char* s2)
{
int n1=my_strlen(s1);
int n2=my_strlen(s2);
int flag=0;
for(int i=0;i<n1 && i<n2;i++)
{
if(s1[i]>s2[i]){
flag=1;

break;
}
else if(s1[i]<s2[i]){
flag=-1;
break;
}
}
if(flag==0){
if(n1==n2)
return 0;
else if(n1<n2)
return -1;
else
return 1;

}
return flag;
}
int main()
{
char str1[500];
char str2[500];
char str3[500];
printf("\nEnter first string: ");
scanf("%s",str1);
printf("\nEnter second string: ");
scanf("%s",str2);
printf("\nOUTPUT\n");
//print length of both strings
printf("lstr1=%d lstr2=%d\n",my_strlen(str1),my_strlen(str2));
//copy str1 to str3 and print
my_strcpy(str3,str1); //catching the returned pointer not necessary
//as change is made to str3
printf("%s\n",str3);
//compare str1 and str2
printf("strcmp=%d\n",my_strcmp(str1,str2));
//concatenate str1 and str2 and print
my_strcat(str1,str2); //catching the returned pointer not necessary
//as change is made to str1
printf("%s\n",str1);
}
