#include<stdio.h>
#include<strings.h>

int main()
{
char *materials[]= {"iron","copper","gold"};
printf("Please remeber these materials :\n");
int i;
for(i=0;i<3;i++)
{
	printf("%s\n",materials[i]);
	}	
return 0;	
}
