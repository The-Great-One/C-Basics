#include<stdio.h>
#include<stdlib.h>
int length(char *s);
void cpy(char *p1,char *p2);
void conc(char *p1,char *p2);
void rev(char *p1,char *p2);
void pal(char *p1,char *p2);

char stri1[30];
char stri2[30];
char str[30];
char s1[30],s2[30];
char a[30],b[30],c[30];
char str1[30],str2[30];
int main()
{
int ch,q;
do{
printf("-----MENU-----");
printf("\n1)Length of string.");
printf("\n2)Copy.");
printf("\n3)Reverse of a string.");
printf("\n4)Palindrome.");
printf("\n5)Concatination.");

printf("\nEnter a choice: ");
scanf("%d",&ch);

switch(ch)
{
case 1:

printf("\nEnter a string: ");
fflush(stdin);
gets(str);
int l;
l = length(str);
printf("The length of string is %d",l);

break;
case 2 :

printf("\nEnter a string: ");
fflush(stdin);
gets(s1);
cpy(&s2,&s1);
printf("\nThe copied string is %s",s2);
printf("\nThe original string is %s",s1);
break;

case 3:


printf("\nEnter a string: ");
fflush(stdin);
gets(stri1);
rev(stri1,stri2);
printf("\nReverse of the string is %s",stri2);
   break;
case 4:

printf("\nEnter a string: ");
fflush(stdin);
gets(a);
cpy(b,a);
rev(b,c);
pal(a,c);
break;

case 5:

printf("\nEnter first string: ");
fflush(stdin);
gets(str1);

printf("\nEnter second string: ");
gets(str2);
conc(str1,str2);
printf("\nThe concatinated string is %s",str1);

   break;


default:
printf("\nPlease enter a vaild choice");


}
printf("\nEnter 0 to continue: ");
scanf("%d",&q);
}while(q==0);
}

int length(char *s)
{
int len=0;
while(*s!='\0')
{
len = len+1;
s++;
}
return(len);
}

void cpy(char *p1,char *p2)
{
while(*p2!='\0')
{
*p1 = *p2;
p2++;
p1++;
}
*p2='\0';
}

void conc(char *p1,char *p2)
{
while(*p1)
p1++;

while(*p2)
{
*p1 = *p2;
p2++;
p1++;
}
*p1='\0';
}

void rev(char *p1,char *p2 )
{
int i,l;
for(l=0;*p1!='\0';l++,p1++);
p1--;
for(i=0;i<l;i++)
{
*p2 = *p1;
p2++;
p1--;
}
}

void pal(char *p1,char *p2)
{
while(*p1==*p2)
{
if(*p1=='\0' || *p2=='\0')
break;
p1++;
p2++;
}

if(*p1=='\0' && *p2=='\0')
printf("\nString is a palindrome");
else
printf("\nString is not a palindrome");

}
