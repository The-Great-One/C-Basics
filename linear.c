#include<stdio.h>

int array[100],n,i,s,j;

void main()
{
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter the Element you want to search: ");
	scanf("%d",&s);
	
	for(j=0;j<=n;j++)
	{
		if(array[j]==s)
		{
			printf("Element found at %d",j+1);
		}
		else
		printf("Not Found");
	}
}
