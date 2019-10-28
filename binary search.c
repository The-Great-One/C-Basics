#include<stdio.h>

int array[100],n,c,first,last,middle,i;

void main()
{
	printf("Enter The Number Of Elements: ");
	scanf("%d",&n);
	
	printf("Enter The Elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&array[i]);
	
	printf("Enter The Element You want to Search: ");
	scanf("%d",&c);
	
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
	if(array[middle]<c)
	first=middle+1;
	
	else if(array[middle]==c)
	{
	printf("Element found at %d",middle+1);
	break;
}
	else(array[middle]>c);
	last=middle-1;
}
}
