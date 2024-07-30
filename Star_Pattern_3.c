#include <stdio.h>
int main()
{
int i, j, k, rows;
printf("Enter a number: ");
scanf("%d",&rows);
printf("\n");
for(i = 0; i < rows; i++)
{
for(k = rows - i; k != 0; k--)
{
printf(" ");
}
for(j = 0; j < rows; j++)
{
printf("*");
}
printf("\n");
}
return 0;
}