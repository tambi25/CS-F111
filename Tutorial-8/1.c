#include<stdio.h>

int main()
{
	int i,j,count,size;
	printf("enter the size of the array \n");
	scanf("%d",&size);
	int arr[size],freqarr[size];
	
	for(i=0;size>i;i++)
	{
		printf("enter the element %d \n",i+1);
		scanf("%d",&arr[i]);
		freqarr[i]=-1;
	}
	
	for(i=0;size>i;i++)
	{
		count=1;
		for(j=i+1;size>j;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				freqarr[j]=0;
			}
		}
		if(freqarr[i] !=0)
		{
			freqarr[i]=count;
		}
	}
	
	
	
	int min;
	min=arr[0];j=0;
	for(i=0;i<size;i++)
	{
		min=arr[i];
		
		for(j=i;size>j;j++)
		{
				if(arr[j]<min)
				{
					
					min=arr[j];
					arr[j]=arr[i];
					arr[i]=min;
						
				}
			
		}
		
	}

	
	printf("\n output \n");
	for(i=0;i<size;i++)
	{
		if(freqarr[i]!=0)
		{
			printf("%d occurs %d times \n",arr[i],freqarr[i]);
		}
	}
	return 0;
}
