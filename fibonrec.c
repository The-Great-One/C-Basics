#include<stdio.h>
int a,b=0,c;
int fibon(int a);
int  main()
{
printf("Enter number upto which woh hoga: ");
scanf("%d",&a);
for (c = 1; c <= a; c++)
  {
    printf("%d\n", fibon(b));
    b++;
  }
	
}

int fibon(int n)
{
if (n == 0 ||	 n == 1)
    return n;
  else
    return (fibon(n-1) + fibon(n-2));
 } 
