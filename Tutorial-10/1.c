#include<stdio.h>
#include<string.h>
int main()
{
    int n,a;
    char str[50],t[50],arr[10][50];
    printf(" Enter the number of strings");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",str);
        strcpy(arr[i],str);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (strcmp(arr[j],arr[j+1])>0)
            {
                
                strcpy(t,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],t);}
            if(strlen(arr[j])>strlen(arr[j+1]))
            {
                a=strlen(arr[j+1]);
                
            }
            else
            {
                a=strlen(arr[j]);
            }
            if(strncmp(arr[j+1],arr[j],a)==0)
            {
                if(strncmp(arr[j+1],arr[j],50)>0)
                {
                    strcpy(t,arr[j]);
                    strcpy(arr[j],arr[j+1]);
                    strcpy(arr[j+1],t);
                    
                }
                    
            }
                
                
            
            
        }
}
    for(int i=0;i<n;i++)
    {
        printf("%s\n",arr[i]);
    }
   
}
