#include<stdio.h>

int main()
{
	int num, array[100], i, j, swap, position;
	scanf("%d",&num);
	printf("\n");
	for(i=0;i<num;i++)
	scanf("%d",&array[i]);
	printf("\n");

for(i=0;i<num;i++)
{
	position=i;
	for(j=i+1;j<num;j++)
	{
		if(array[position]>array[j])
		{
			position=j;
		}
	}
		if(position!=i)
		{
			swap=array[i];
			array[i]=array[position];
			array[position]=swap;
		}
}
printf("Sorted list :\n");
for (i = 0; i < num; i++)
printf("%d\n", array[i]);
}
