#include<stdio.h>
#include<string.h>
void main()
{
 int ch,q=1,length,i2=0,c2=0,length3,j3=0,i3,c3,i,j,len=0,c=0;
 char a[50],b[50];
 while(q==1)
{ 
printf("----------MENU----------\n");
printf("1. Length(Functions)\n");
printf("2. Length\n");
printf("3. Copy(FUnctions)\n");
printf("4. Copy\n");
printf("5. Reversing(Functions)\n");
printf("6. Reversing\n");
printf("7. Palindrome(Functions)\n");
printf("8. Palindrome\n");
printf("9. Concatenation(Fucntions)\n");
printf("10. Concatenation\n");

 printf("Enter your choice: ");
 scanf("%d",&ch);
 switch(ch)
  {
case 1:
    printf("Program for Length of a string using string functions \n");
    printf("Enter a string\n");
    scanf("%s",a);
    length=strlen(a);
    printf("The length of the entered string is : %d\n",length);
    printf("If you want to run again press 1 for YES and 2 for NO\n");
    scanf("%d",&q);
    break;
case 2:
	printf("Program for length of a string without using functions:\n");
	printf("Enter a string\n");
    scanf("%s",a);
    while(a[i2]!='\0')
    {c2++;
    i2++;
    }
	printf("The length of the entered string is : %d\n",c2);
	printf("Do you want to Run again?(1): ");
	scanf("%d",&ch);
	break;
case 3:
	printf("Program for copying a string using functions\n");
	printf("Enter a string\n");
	scanf("%s",a);
	strcpy(b,a);
	printf("The original string is : %s \nThe copied string is : %s\n",a,b);
	printf("Do you want to Run again?(1): ");
	scanf("%d",&ch);
	break;
case 4:
	printf("Program for copying a string without using string function \n");
	printf("Enter a string\n");
	scanf("%s",a);
	while(a[j3]!='\0')
	{c3++;
	j3++;
	}
	for(i3=0;i3<c3;i3++)
	{ b[i3]=a[i3];
	}
	b[i3]='\0';
	printf("The original string is: %s\nThe copied string is: %s\n",a,b);
          
	printf("Do you want to Run again?(1): ");
	scanf("%d",&ch);
	break;
case 5:
	printf("Program to print reverse of a string using functions \n");
	printf("Enter a string\n");
	scanf("%s",a);
	strcpy(b,a);
	strrev(b);
	printf("the reversed string is %s",b);
	printf("Do you want to Run again?(1): ");
	scanf("%d",&ch);
	break;
case 6:

	printf("Program to print reverse of a string using functions \n");
	printf("Enter a string");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	for(i=len-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	printf("Reverse of string is %s",b);
	printf("Do you want to Run again?(1): ");
	scanf("%d",&ch);
	break;
case 7:
	printf("Program to print pallindrome of a string using functions");
	printf("Enter a string");
	scanf("%s",a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	printf("The string is a pallindrome.\n");
	else
	printf("The string is not a pallindrome");
	printf("Do you want to Run again?(1): ");
	scanf("%d",&ch);
	break;
case 8:
	printf("Program to print pallindrome of a string without using functions \n");
	printf("Enter a string");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	for(i=len-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	for(i=0;i<=len;i++)
	{
		if(b[i]!=a[i])
		c++;
	}
	if(c>0)
	printf("Not pallindrome");
	else
	printf("Pallindrome");
	printf("Do you want to Run again?(1): ");
	scanf("%d",&ch);
	break;
case 9:
	printf("Program to print co concatenation of a string using functions \n");
	printf("Enter a string");
	scanf("%s",a);
	printf("Enter a string");
	scanf("%s",b);
	strcat(a, b);
	printf("string obtained after concatenation:",a);
	printf("Do you want to Run again?(1): ");
	scanf("%d",&ch);
	break;
case 10:
	printf("Program to print co concatenation of a string without using functions \n");
	printf("Enter a string \n");
	scanf("%s",a);
	printf("Enter a string");
	scanf("%s",b);
	while(a[len]!='\0')
	{
		len++;
	}
	while(a[j]!='\0')
	{
		a[len]=b[j];
		j++;
		len++;
	}
	a[i]='\0';
	printf("Concatenated String is %s",a);
	printf("Do you want to Run again?(1): ");
	scanf("%d",&ch);
	break;
	default:
            printf("The assignment number is invalid\n");
            printf("If you want to run again press 1 for YES and 2 for NO\n");
            scanf("%d",&ch);
    }
}
}

