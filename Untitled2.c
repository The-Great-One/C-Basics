#include&lt;stdio.h&gt;
#include&lt;string.h&gt;
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

printf(&quot;Enter your choice&quot;);
scanf(&quot;%d&quot;,&amp;ch);
switch(ch)
{
case 1:
printf(&quot;Program for Length of a string using string functions \n&quot;);
printf(&quot;Enter a string\n&quot;);
scanf(&quot;%s&quot;,a);
length=strlen(a);
printf(&quot;The length of the entered string is : %d\n&quot;,length);
printf(&quot;If you want to run again press 1 for YES and 2 for NO\n&quot;);
scanf(&quot;%d&quot;,&amp;q);
break;
case 2:
printf(&quot;Program for length of a string without using functions:\n&quot;);

printf(&quot;Enter a string\n&quot;);
scanf(&quot;%s&quot;,a);
while(a[i2]!=&#39;\0&#39;)
{c2++;
i2++;
}
printf(&quot;The length of the entered string is : %d\n&quot;,c2);
printf(&quot;If you want to run again press 1 for YES and 2 for NO\n&quot;);
scanf(&quot;%d&quot;,&amp;ch);
break;
case 3:
printf(&quot;Program for copying a string using functions\n&quot;);
printf(&quot;Enter a string\n&quot;);
scanf(&quot;%s&quot;,a);
strcpy(b,a);
printf(&quot;The original string is : %s \nThe copied string is : %s\n&quot;,a,b);
printf(&quot;If you want to run again press 1 for YES and 2 for NO\n&quot;);
scanf(&quot;%d&quot;,&amp;ch);
break;
case 4:
printf(&quot;Program for copying a string without using string function \n&quot;);
printf(&quot;Enter a string\n&quot;);
scanf(&quot;%s&quot;,a);
while(a[j3]!=&#39;\0&#39;)
{c3++;
j3++;
}

for(i3=0;i3&lt;c3;i3++)
{ b[i3]=a[i3];
}
b[i3]=&#39;\0&#39;;
printf(&quot;The original string is: %s\nThe copied string is: %s\n&quot;,a,b);

printf(&quot;If you want to run again press 1 for YES and 2 for NO\n&quot;);
scanf(&quot;%d&quot;,&amp;ch);
break;
case 5:
printf(&quot;Program to print reverse of a string using functions \n&quot;);
printf(&quot;Enter a string\n&quot;);
scanf(&quot;%s&quot;,a);
strcpy(b,a);
strrev(b);
printf(&quot;the reversed string is %s&quot;,b);
break;
case 6:

printf(&quot;Program to print reverse of a string using functions \n&quot;);
printf(&quot;Enter a string&quot;);
scanf(&quot;%s&quot;,a);
for(i=0;a[i]!=&#39;\0&#39;;i++)
{
len++;
}
for(i=len-1;i&gt;=0;i--)

{
b[j]=a[i];
j++;
}
printf(&quot;Reverse of string is %s&quot;,b);
break;
case 7:
printf(&quot;Program to print pallindrome of a string using functions&quot;);
printf(&quot;Enter a string&quot;);
scanf(&quot;%s&quot;,a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf(&quot;The string is a pallindrome.\n&quot;);
else
printf(&quot;The string is not a pallindrome&quot;);
break;
case 8:
printf(&quot;Program to print pallindrome of a string without using functions \n&quot;);
printf(&quot;Enter a string&quot;);
scanf(&quot;%s&quot;,a);
for(i=0;a[i]!=&#39;\0&#39;;i++)
{
len++;
}
for(i=len-1;i&gt;=0;i--)
{

b[j]=a[i];
j++;
}
for(i=0;i&lt;=len;i++)
{
if(b[i]!=a[i])
c++;
}
if(c&gt;0)
printf(&quot;Not pallindrome&quot;);
else
printf(&quot;Pallindrome&quot;);
break;
case 9:
printf(&quot;Program to print co concatenation of a string using functions \n&quot;);
printf(&quot;Enter a string&quot;);
scanf(&quot;%s&quot;,a);
printf(&quot;Enter a string&quot;);
scanf(&quot;%s&quot;,b);
strcat(a, b);
printf(&quot;string obtained after concatenation:&quot;,a);
break;
case 10:
printf(&quot;Program to print co concatenation of a string without using functions \n&quot;);
printf(&quot;Enter a string \n&quot;);
scanf(&quot;%s&quot;,a);
printf(&quot;Enter a string&quot;);

scanf(&quot;%s&quot;,b);
while(a[len]!=&#39;\0&#39;)
{
len++;
}
while(a[j]!=&#39;\0&#39;)
{
a[len]=b[j];
j++;
len++;
}
a[i]=&#39;\0&#39;;
printf(&quot;Concatenated String is %s&quot;,a);
break;
default:
printf(&quot;The assignment number is invalid\n&quot;);
printf(&quot;If you want to run again press 1 for YES and 2 for NO\n&quot;);
scanf(&quot;%d&quot;,&amp;ch);
}
}
}
