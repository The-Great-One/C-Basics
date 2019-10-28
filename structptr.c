#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<process.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
int count=0;
void Create(struct student *ptr)
{
    int i,n;
    printf("Enter number (<10) of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter details of student %d (rollno,name and marks)\n",i+1);
        scanf("%d %s %f",&ptr->rollno,&ptr->name,&ptr->marks);
        ptr++;
        count++;
    }
}
void Modify(struct student *ptr4)
{
    int i,rno,c;
    printf("Enter rollno of student whose record you want to modify\n");
    scanf("%d",&rno); 
for(i=0;i<count;i++)
{
 if(ptr4->rollno==rno)
{
    printf("WHICH DETAIL DO YOU WANT TO MODIFY?\nPRESS 1 FOR NAME\nPRESS 2 FOR PRN\nPRESS 3 FOR MARKS\n");
    scanf("%d",&c);
    break;
}
ptr4++;
}
switch(c)
{
case 1:
    printf("Enter the new name");
    scanf("%s",ptr4->name);
    break;
case 2:
    printf("Enter the new prn");
    scanf("%d",&ptr4->rollno);
    break;
case 3:
    printf("Enter the new marks");
    scanf("%f",&ptr4->marks);
    break;
default:
    printf("INAVLID CHOICE");
    break;
}
}
void Print(struct student *ptr1)
{
    int i;
    printf("Student Database\n");
    for(i=0;i<count;i++)
    {
        printf("%d\t%10s\t%10.1f\n",ptr1->rollno,ptr1->name,ptr1->marks);
        ptr1++;
    }
}
void Search(struct student *ptr2)
{
    int i,rno;
    printf("Enter roll number of student whose details you want to fetch\n");
    scanf("%d",&rno);
    for(i=0;i<count;i++)
    {
        if(ptr2->rollno==rno)
        {
            printf("Roll number=%d\n",ptr2->rollno);
            printf("Name=");
            puts(ptr2->name);
            printf("Marks=%f\n",ptr2->marks);
            break;
        }
        ptr2++;
    }
}
void Delete(struct student *ptr3)
{
    int rno,i,j;
    printf("Enter rollno of student whose record you want to delete\n");
    scanf("%d",&rno);
    for(i=0;i<count;i++)
    {
    if((ptr3->rollno)==rno)
    {
        for(j=i+1;j<count;j++)
        {
            *ptr3=*(ptr3+1);
            ptr3++;
        }
        count--;
        break;
    }
    ptr3++;
}

}
void Create(struct student *ptr);
void Print(struct student *ptr1);
void Modify(struct student *ptr4);
void Search(struct student *ptr2);
void Delete(struct student *ptr3);

int main(void)
{
    struct student s[20];
    int ch;
    printf("The menu of the student database is as follows:\n");
    printf("1. Create\n");
    printf("2. Modify\n");
    printf("3. Delete\n");
    printf("4. Search\n");
    printf("5. Print\n");
    printf("6. Exit\n");
    do
    {
        printf("Enter number corresponding to your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                Create(s);
                break;
            case 2:
                Modify(s);
                break;
            case 3:
                Delete(s);
                break;
            case 4:
                Search(s);
                break;
            case 5:
                Print(s);
                break;
            case 6:
                exit(0);
                break;
            default:
                printf("Wrong Input\n");
            printf("Enter any number except 6 to continue\n");
            scanf("%d",&ch);
        }
    }while(ch!=6);
    return 0;
}

