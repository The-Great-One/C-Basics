#include<stdio.h>

int num,i,j,swap,array[100];
int main()
{
	printf("enter the number of terms: ");
	scanf("%d",&num);
	
	printf("Enter the numbers: ");
	for(i=0;i<num;i++)
	scanf("%d",&array[i]);
	
	for(i=0;i<num-1;i++)
	{
	for(j=0;j<num-i-1;j++)
	{
	if(array[j]>array[j+1])
	{
		swap=array[j];
		array[j]=array[j+1];
		array[j+1]=swap;
		
	}
}
}
	printf("Sorted Array\n");
	for(i=0;i<num;i++)
	printf("%d\n",array[i]);
}	
