#include<stdio.h>

int main()
{

int ch, array[100], n, c, d, t,k, swap, position;
printf("-----MENU-----\n");
printf("1. Bubble Sort\n");
printf("2. Insertion Sort\n");
printf("3. Selection Sort\n");
printf("Enter Your Choice: ");
scanf("%d",&ch);

switch(ch)
{
case 1:
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter %d integers:\n", n);
for (c = 0; c < n; c++)
scanf("%d", &array[c]);
for (c = 0 ; c < n - 1; c++)
{
for (d = 0 ; d < n - c - 1; d++)
{
if (array[d] > array[d+1])
{
swap=array[d];
array[d]=array[d+1];
array[d+1] = swap;

}
}
printf("Pass %d: \n",c+1);
for(k=0;k<n;k++)
printf("%d\n",array[k]);
}
printf("Sorted list :\n");
for (c = 0; c < n; c++)
printf("%d\n", array[c]);
break;

case 2:
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter %d integers\n", n);
for (c = 0; c < n; c++)
	scanf("%d", &array[c]);
for (c=1;c<=n-1;c++) 
	{
			d = c;
		while ( d > 0 && array[d-1] > array[d]) 
			{
				t=array[d];
				array[d]=array[d-1];
				array[d-1]=t;
				d--;
			}
		printf("Pass %d: \n",c);
		for(k=0;k<n;k++)
			printf("%d\n",array[k]);
	}
printf("Sorted list :\n");
for (c = 0; c <= n - 1; c++) 
{
	printf("%d\n", array[c]);
}
break;

case 3:
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter %d integers\n", n);
for (c = 0; c < n; c++)
scanf("%d", &array[c]);
for (c = 0; c < (n - 1); c++)
{	
position = c;
for (d = c + 1; d < n; d++)
{
if (array[position] > array[d])
position = d;
}
if (position != c)
{
swap=array[c];
array[c]=array[position];
array[position]=swap;
}
printf("Pass %d: \n",c+1);
for(k=0;k<n;k++)
printf("%d\n",array[k]);
}

printf("Sorted list :\n");
for (c = 0; c < n; c++)
printf("%d\n", array[c]);
break;
}
}	
