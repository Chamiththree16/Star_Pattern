#include<stdio.h>
int main()
{
int i, j,rows,k;
printf("Enter number of rows:");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
	for(j=rows;j>i;j--)
	{
	printf(" ");
	}
	for(k=1;k<=((j*2)-1);k++)
	{
printf("*");
}
printf("\n");
}
return 0;
}