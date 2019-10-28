#include<stdio.h>
#include<math.h>
int ch;
int i=1;
int m, n, c, d,p, q,k,j,a[10][10],r, first[10][10],max=0, second[10][10],transpose[10][10], sum[10][10],difference[10][10], multiply[10][10];
int sum1 = 0, array[10][10], s= 0;
int array1[100], position, e, value,matrix[10][10];

main()
{

while(i==1)
{

int ch;
printf("----------MENU----------\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Transpose\n");
printf("4. Multiplication\n");
printf("5. Find Greatest Number In Each Row\n");
printf("6. Addition of Major Diagonal Elements\n");
printf("7. Addition of Minor Diagonal Elements\n");
printf("8. Lower Triangular Matrix\n");
printf("9. Upper Triangular Matrix\n");
printf("10. Find Weather Matrix is Symmetric or not?\n");
printf("11. Insertion in Array at Specified Position\n");
printf("12. Deletion of element in Array from Specified Position\n");
printf("Enter Your Choice: ");
scanf("%d",&ch);

switch (ch)
{
   case 1:
   printf("Enter the number of rows and colums in the Matrix: ");
   scanf("%d%d",&m,&n);
   
   printf("Enter the Elements of the First Matrix: ");
   for(c=0;c<m;c++)
   for(d=0;d<n;d++)
   scanf("%d",&first[c][d]);
   
   printf("Enter the Elements of the Second Matrix: ");
   for(c=0;c<m;c++)
   for(d=0;d<m;d++)
   scanf("%d",&second[c][d]);


   for(c=0;c<m;c++)
   {
    for(d=0;d<m;d++)
   {
sum[c][d]=first[c][d]+second[c][d];
printf("%d", sum[c][d]);  
}
printf("\n");
  }
printf("Do you want to Run again?(1): ");
scanf("%d",&i);
    break;
   
case 2:
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
    for (c = 0; c < m; c++)
    for (d = 0 ; d < n; d++)
    scanf("%d", &first[c][d]);
 
    printf("Enter the elements of second matrix\n");
 
    for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
    scanf("%d", &second[c][d]);
 
    printf("Difference of entered matrices:-\n");
 
    for (c = 0; c < m; c++) {
    for (d = 0; d < n; d++) {
    difference[c][d] = first[c][d] - second[c][d];
    printf("%d\t",difference[c][d]);
    }
    printf("\n");
    }
printf("Do you want to Run again?(1): ");
scanf("%d",&i);
break;

case 3:
printf("Enter rows and columns of matrix: ");
scanf("%d %d", &r, &c);

printf("\nEnter elements of matrix:\n");
for(i=0; i<r; ++i)
for(j=0; j<c; ++j)
{
printf("Enter element a%d%d: ",i+1, j+1);
scanf("%d", &a[i][j]);
}
printf("\nEntered Matrix: \n");
for(i=0; i<r; ++i)
{
printf("\n");
for(j=0; j<c; ++j)
{
printf("%d  ", a[i][j]);

}
}
for(i=0; i<r; ++i)
for(j=0; j<c; ++j)
{
transpose[j][i] = a[i][j];
}
printf("\nTranspose of Matrix:\n");
for(i=0; i<c; ++i)
{
printf("\n");
for(j=0; j<r; ++j)
{
printf("%d  ",transpose[i][j]);
}
}
 
printf("Do you want to Run again?(1): ");
scanf("%d",&i);
break;


case 4:
printf("Enter the number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter the elements of first matrix\n");
 
  for (  c = 0 ; c < m ; c++ )
  for ( d = 0 ; d < n ; d++ )
  scanf("%d", &first[c][d]);
 
  printf("Enter the number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if ( n != p )
  printf("Matrices with entered orders can't be multiplied with each other.\n");
  else
  {
    printf("Enter the elements of second matrix\n");
 
    for ( c = 0 ; c < p ; c++ )
    for ( d = 0 ; d < q ; d++ )
    scanf("%d", &second[c][d]);
 
    for ( c = 0 ; c < m ; c++ )
    {
    for ( d = 0 ; d < q ; d++ )
    {
    for ( k = 0 ; k < p ; k++ )
    {
    sum1 = sum1 + first[c][k]*second[k][d];
    }
 
    multiply[c][d] = sum1;
    sum1 = 0;
    }
    }
 
    printf("Product of entered matrices:-\n");
 
    for ( c = 0 ; c < m ; c++ )
    {
    for ( d = 0 ; d < q ; d++ )
    printf("%d\t", multiply[c][d]);
 
    printf("\n");
    }
printf("Do you want to Run again?(1): ");
scanf("%d",&i);
break;

case 5:
printf("Enter the number of rows and columns of matrix\n");
scanf("%d%d", &r, &c);
printf("Enter the elements of matrix\n");

for (i = 0; i < r; i++)
for (j = 0; j < c; j++)
scanf("%d", &array[i][j]);


for (i = 0; i < r; i++)
{
for (j = 0; j < c; j++)
{
if(array[i][j]>max)
max=array[i][j];
}
printf("\ngreatest element of row %d = %d",i+1,max);
}
printf("Do you want to Run again?(1): ");
scanf("%d",&i);
break;
case 6:
printf("\nEnter the order of the matix \n");
scanf("%d %d", &r, &c);

    if (r == c )
    {
printf("\nEnter the co-efficients of the matrix\n");
    for (i = 0; i < r; ++i)
    {
    for (j = 0; j < c; ++j)
    {
    scanf("%d", &array[i][j]);
    }
    }

    printf("\nThe given matrix is \n");
    for (i = 0; i < r; ++i)
    {
    for (j = 0; j < c; ++j)
    {
    printf(" %d", array[i][j]);
    }
    printf("\n");
    }
    for (i = 0; i < r; ++i)
    {
    s = s + array[i][i];

    }

    printf("\nThe sum of the major diagonal elements is = %d\n", s);


    }

    else
    printf("The given order is not square matrix\n");
printf("Do you want to Run again?(1): ");
scanf("%d",&i);
break;

case 7:
printf("\nEnter the order of the matix \n");
scanf("%d %d", &r, &c);

    if (r == c )
    {
printf("\nEnter the co-efficients of the matrix\n");
    for (i = 0; i < r; ++i)
    {
    for (j = 0; j < c; ++j)
    {
    scanf("%d", &array[i][j]);
    }
    }
    printf("\nThe given matrix is \n");
    for (i = 0; i < r; ++i)
    {
    for (j = 0; j < c; ++j)
    {
    printf(" %d", array[i][j]);
    }
    printf("\n");
    }
    for (i = 0; i < r; ++i)
    {
    for (j = 0; j < c; ++j)
    {
    s = s + array[i][j-i-1];
    }
    }
    printf("\nThe sum of the minor diagonal elements is = %d\n", s);
    }
    else
    printf("The given order is not square matrix\n");
printf("Do you want to Run again?(1): ");
scanf("%d",&i);
break;

case 8:
printf("\nEnter the order of the matix \n");
scanf("%d %d", &r, &c);

    if (r == c )
    {

    printf("\nEnter the co-efficients of the matrix\n");
    for (i = 0; i < r; ++i)
    {
    for (j = 0; j < c; ++j)
    {
    scanf("%d", &array[i][j]);
    }
    }

    printf("\nThe given matrix is \n");
    for (i = 0; i < r; ++i)
    {
for (j = 0; j < c; ++j)
    {
    printf(" %d", array[i][j]);
    }
    printf("\n");
    }
printf("Lower triangular matrix = \n");
    for (i = 0; i < r; ++i)
    {
    for (j = 0; j < c; ++j)
    {
    if(i>j)
    {
    array[i][j]=0;
    }
printf("%d\t",array[i][j]);
    }
    printf("\n");
}
    }
else
    printf("The given order is not square matrix\n");

printf("Do you want to Run again?(1): ");
scanf("%d",&i);
break;

case 9:
printf("\nEnter the order of the matix \n");
scanf("%d %d", &r, &c);
  if (r == c )
    {
printf("\nEnter the co-efficients of the matrix\n");
    for (i = 0; i < r; ++i)
    {
    for (j = 0; j < c; ++j)
    {
    scanf("%d", &array[i][j]);
    }
    }
printf("\nThe given matrix is \n");
    for (i = 0; i < r; ++i)
    {
    for (j = 0; j < c; ++j)
    {
    printf(" %d", array[i][j]);
    }
    printf("\n");
    }
printf("Lower triangular matrix = \n");
    for (i = 0; i < r; ++i)
{
    for (j = 0; j < c; ++j)
    {
    if(i<j)
    {
    array[i][j]=0;
    }
    printf("%d\t",array[i][j]);
    }
    printf("\n");
}
    }
else
    printf("The given order is not square matrix\n");
printf("Do you want to Run again?(1): ");
scanf("%d",&i);
break;

case 10:
printf("Enter the number of rows and columns of matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of the matrix\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
    scanf("%d", &matrix[c][d]);
 
  for (c = 0; c < m; c++)
for (d = 0; d < n; d++)
      transpose[d][c] = matrix[c][d];
 
  if (m == n)
  {
    for (c = 0; c < m; c++)
    {
      for (d = 0; d < m; d++)
      {
        if (matrix[c][d] != transpose[c][d])
          break;
      }
      if (d != m)
        break;
    }
    if (c == m)
      printf("The matrix is symmetric.\n");
    else
      printf("The matrix isn't symmetric.\n");
  }
  else
    printf("The matrix isn't symmetric.\n");
printf("Do you want to Run again?(1): ");
scanf("%d",&i);
break;

case 11:
   printf("Enter number of elements in array\n");
   scanf("%d", &r);
 
   printf("Enter %d elements\n", r);
 
   for (e = 0; e < r; e++)
      scanf("%d", &array1[e]);
 
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &position);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (e = r - 1; e >= position - 1; e--)
      array1[e+1] = array1[e];
 
   array1[position-1] = value;
 
   printf("Resultant array is\n");
 
   for (e = 0; e <= r; e++)
      printf("%d\n", array1[e]);
printf("Do you want to Run again?(1): ");
scanf("%d",&i);
break;

case 12:
	printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array1[c]);
 
   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);
 
   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array1[c] = array1[c+1];
 
      printf("Resultant array:\n");
 
      for (c = 0; c < n - 1; c++)
         printf("%d\n", array1[c]);
printf("Do you want to Run again?(1): ");
scanf("%d",&i);
break;
}
}
}
}
}
