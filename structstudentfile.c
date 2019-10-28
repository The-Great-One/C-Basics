 #include<stdio.h>

#include<conio.h>

void main() {



struct employee {

  int empno;

  char name[30];
  int basic,grade;
  }e;
FILE *fp;
int num=0;
long recsize;
char another,ch;
clrscr();

fp=fopen("EMPLOYEE.DAT","rb+");
if(fp==NULL) {
fp=fopen("EMPLOYEE.DAT","wb+");


}

recsize=sizeof(e);

while(1) {

clrscr();

printf("\t\tEmployee number database:\n");
printf("\t\t*************************\n\n");
printf("\n\t1: Add employee information:\n");
printf("\n\t2: List employee information:\n");
printf("\n\t3: Check missing employee numbers:\n");
printf("\n\t0: Exit:\n\n");

gotoxy(2,24);
printf("your choice: ");
fflush(stdin);
ch=getche();

switch(ch) {

case '1':

clrscr();

fseek(fp,0,SEEK_END);

another='y';

while(another=='y' || another=='Y') {

printf("\t\tAdd employee information:\n");
printf("\t\t*************************\n\n");

printf("Note: employee numbers should be given in ascending order\n\n");

printf("\nEnter employee number: ");
scanf("%d",&e.empno);
printf("\n\nEnter employee name: ");
scanf("%s",e.name);
printf("\n\nEnter employee basic salary: ");
scanf("%d",&e.basic);
printf("\n\nEnter employee grade(1/2/3): ");
scanf("%d",&e.grade);

fwrite(&e,recsize,1,fp);

gotoxy(2,24);
printf("Add another employee information(Y/N): ");
fflush(stdin);
another=getche();

clrscr();

}

break;

case '2':

clrscr();

printf("\t\tList employee information:\n");
printf("\t\t**************************\n\n\n");

rewind(fp);
while(fread(&e,recsize,1,fp)==1) {

printf("\n%3d\t%8s\t%5d\t%d\n",e.empno,e.name,e.basic,e.grade);

}

printf("\n\npress any key to return...\n");
getch();

break;

case '3':

clrscr();

printf("\t\tMissing employee numbers:\n");
printf("\t\t*************************\n\n");

rewind(fp);
while(fread(&e,recsize,1,fp)==1) {
num=e.empno;  /* assigning the value of first employee number */
break;
}

rewind(fp);  /* again rewinding the file to read from beginning */

while(fread(&e,recsize,1,fp)==1) {

if(num!=e.empno) {    /* if assigned number is smaller than employee number
   we will print all the number between them */
while(num<e.empno) {

printf("%4d ",num);

num++;
}
num=e.empno+1;

}

 /* we will assign greater value than employee number
    to make sure that both don't match until another
    greater employee number is found     */

else

num=e.empno+1;

}

printf("\n\n press any key to return...");
getch();

break;

case '0':

fclose(fp);


}
}
}


