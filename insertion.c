#include<stdio.h>

int main()
{
	int i,j,num,array[100],d,t;
	
	printf("Enter the Amount of Numbers: ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	scanf("%d",&array[i]);
	printf("\n");
	for(i=0;i<num;i++)
	{
		d=i;
		while(d>0 && array[d-1]>array[d])
		{
			t=array[d];
			array[d]=array[d-1];
			array[d-1]=t;
			d--;
			}	
	}
for(i=0;i<=num-1;i++)
printf("%d\n",array[i]);
}
