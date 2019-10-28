#include<stdio.h>

int main()
{
	
	char str1[100],s2[100];
	int i=0,count=0;
	printf("Enter: ");
	gets(str1);
	
	while(str1[i]!='\0')
	{
	count++;
	i++;
}
	printf("count: %d\n",&count);
	for(i=count;str1[i];i--)
	s2[i]=str1[i];
	
	s2[i]='\0';
	printf("s2: %s",s2);
}
