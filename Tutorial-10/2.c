#include<stdio.h>

void reverse_words(char*s,int n)
{
    char word[50000];
    int i=0,j;
    while(i<n){
        j=0;
        while((s[i])!=' '&&(s[i]!='\0'))
        {word[j++]=s[i++];
        }
        ++i;
        for(int k=0;k<j/2;++k)
        {
            char t=word[k];
            word[k]=word[j-k-1];
            word[j-k-1]=t;
        }
        word[j]='\0';
        printf("%s ",word);
    }
}
int main()
{
    int length;
    char ch,str[50000];
    printf("\nEnter your string : ");
    scanf("%c",&ch);
    length=0;
    while(ch!='\n')
    {
        str[length]=ch;
        length++;
        scanf("%c",&ch);
    }

printf("\nOUTPUT\nReversed words\n");
reverse_words(str,length);
}
