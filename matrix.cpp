#include<stdio.h>

int disp[2][3],matrix[2][3];
int i,j;
int main()
{
for (i=0;i<2;i++)
for (j=0;j<3;j++)
scanf("%d",&disp[i][j]);

for (i=0;i<2;i++)
{
for (j=0;j<3;j++)
{
printf("%d ",disp[i][j]);
}
printf("\n");
}
for (i=0;i<2;i++)
for (j=0;j<3;j++)
matrix[j][i]=disp[i][j];

for (i=0;i<2;i++)
{
for (j=0;j<3;j++)
{
printf("%d ",matrix[j][i]);
}
printf("\n");
}

return 0;
}

