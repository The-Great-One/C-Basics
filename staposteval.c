#include<stdio.h>
#include<stdlib.h>      
#include<ctype.h>     
#include<string.h>

#define SIZE 100


char stack[SIZE];
int top = -1;



void push(int item)
{
	if(top >= SIZE-1)
	{
		printf("\nStack Overflow.");
	}
	else
	{
		top = top+1;
		stack[top] = item;
	}
}



char pop()
{
	char item ;

	if(top <0)
	{
		printf("stack under flow: invalid infix expression");
		getchar();
		
		exit(1);
	}
	else
	{
		item = stack[top];
		top = top-1;
		return(item);
	}
}





void postfix_eval(char postfix[SIZE])
{

	int i=0 ;
	//char ch;
	int val;
	int A, B ;
    char *item;


	item = postfix;         

	while(*item != '\0') 
	{
	
		if (isdigit(*item))
		{
			
			push(*item - '0');
			
		}
		else
		{
			
			A = pop();
			B = pop();

			switch (*item) 
			{
				case '*':
				val = B * A;
				break;

				case '/':
				val = B / A;
				break;

				case '+':
				val = B + A;
				break;

				case '-':
				val = B - A;
				break;
			}

			
			push(val);
		}
		item++;
	}
	printf( " \n Result of expression evaluation : %d \n", pop()) ;
}

int main()
{
	char postfix[SIZE];
	printf("\nEnter Infix expression : ");
	gets(postfix);
	postfix_eval(postfix);
	return 0;
	
}

