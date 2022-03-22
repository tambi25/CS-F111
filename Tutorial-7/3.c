#include<stdio.h>
#include<math.h>

int main () 
{
  
int sum, i, x, n;
  
scanf ("%d %d", &x, &n);
  
if (n < 0)
    {
      
printf ("value is not  valid\n");
      
while (n > 0)
	
	{
	  scanf ("%d %d", &x, &n);
	}
    }
  
  else
    {
      
printf ("value is  valid\n");
sum = 1;
      
for (i = 1; i <= n; i++)
	
sum = sum + pow(x,i);
      
printf ("sum of series=%d\n", sum);
    
}

}