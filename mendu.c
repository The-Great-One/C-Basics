#include<stdio.h>

int ch,num,i,j,swap,array[100],position;

int main()
{
	printf("1.bubble");
	printf("2.insetion");
	printf("3.selection");
	printf("Choice: ");
	scanf("%d",&ch);
	
switch(ch)
{
	
	case 1: 
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
	break;
	
case 2:
	printf("enter the number of terms: ");
	scanf("%d",&num);
	
	printf("Enter the numbers: ");
	for(i=0;i<num;i++)
	scanf("%d",&array[i]);
	
	for(i=0;i<=num-1;i++)
	{
		j=i;
	
	while(j>0 && array[j-1]>array[j])
	{
		swap=array[j];
		array[j]=array[j-1];
		array[j-1]=swap;
	j--;
	}
	}
	printf("Sorted Array\n");
	for(i=0;i<num;i++)
	printf("%d\n",array[i]);
	break;
case 3:
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
	break;
	
}


	
}
