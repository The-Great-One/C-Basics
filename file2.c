#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *f1,*f2,*ft;
char ch,file1[20],file2[20],file3[20];
f1=fopen("D:\\Desktop\\program1.TXT","w");
f2=fopen("D:\\Desktop\\program2.TXT","r");
if(f1==NULL || f2==NULL)
{
perror("ERROR");
printf("\nFile doesnt exist");
return 0;
}
ft=fopen("D:\\Buddy session\\","w");
if(ft==NULL)
printf("Error");
while((ch=fgetc(f1))!=EOF)
fputc(ch,ft);
while((ch=fgetc(f2))!=EOF)
fputc(ch,ft);
printf("TWo files merged successfully");

}


