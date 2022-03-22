#include<stdio.h>
     int
     main ()
{
 
int count[5], candidate, spoilt = 0, voters;
 
printf ("\n Enter the number of voters: ");
 
scanf ("%d", &voters);
 
 
for (int i = 0; i < 5; i++)
   
    {
     
count[i] = 0;
 
}
for (int i = 0; i < voters; i++)
   
    {
     
printf ("\nVote-%d:", i + 1);
     
scanf ("%d", &candidate);
     
switch (candidate)

{

case 1:
 count[0] += 1;
 
break;

case 2:
 count[1] += 1;
 
break;

case 3:
 count[2] += 1;
 
break;

case 4:
 count[3] += 1;
 
break;

case 5:
 count[4] += 1;
 
break;

default:
 ++spoilt;
 
break;

}
   
}
 
for (int i = 0; i < 5; i++)
printf (" \n Candidate -%d\tVotes: %d", i + 1, count[i]);
printf ("\nthe number of spoilt votes: %d\n", spoilt);
int j;
int max = count[0];
int n = sizeof (count) / sizeof (count[0]);
for (int i = 1; i < n; i++)
if (count[i] > max)
      {
max = count[i];

j = i;
}
if (spoilt > max)
max = spoilt;
if (max == spoilt)
printf ("TRUMP WON\n");
  else if (max)
for (int i = 0; i < 5; i++)
if (count[i] == max)
printf ("The winner is Candidate %d with %d votes\n", i + 1, max);
 return 0;
}