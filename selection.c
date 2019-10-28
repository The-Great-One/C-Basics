#include<stdio.h>

int num,i,j,swap,array[100],position;

int main()
{
	printf("enter the number of terms: ");
	scanf("%d",&num);
	
	printf("Enter the numbers: ");
	for(i=0;i<num;i++)
	scanf("%d",&array[i]);
	
	for(i=0;i<num-1;i++)
	{
		position=i;
		for(j=i+1;j<num;j++)
		{
			if(array[position]>array[j])
			{
				position=j;
			}
			if(position!=i)
			{
				swap=array[i];
				array[i]=array[position];
				array[position]=swap;
			}
		}
	}
	printf("Sorted Array\n");
	for(i=0;i<num;i++)
	printf("%d\n",array[i]);
}
