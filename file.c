#include<conio.h>
#include<stdio.h>

char a[100];
int marks[100],i,num,value=0;
int main()
{
FILE *fptr;
fptr=fopen("D:\\Desktop\\program.TXT","r");
if (fptr==NULL)
{
	printf("Error Opening File");
	exit(1);
}

//fscanf(fptr,"&d",&num);
printf("Value=%d",&num);
//fprintf(fptr,"&d",num);
fclose(fptr);
return 0;
}
/*
int main()

{
	printf("Enter Details of 10 Students\n");
	for(i=0;i<=10;i++)
	{
		printf("Enter Name of %d student: ",i);
		scanf("%s",&a[i]);
		printf("Enter Marks of %d student: ",i);
		scanf("%d",&marks[i]);
	}
}
*/
