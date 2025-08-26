#include<stdio.h>
void main()
{
	int n,i=1,j;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	printf("Enter range of table: ");
	scanf("%d",&j);
	
	printf("Table of given number is: \n");
	
	while(i<=j)
	{
		printf("%d X %d = %d\n",n,i,n*i);
		i++;
	}
	
}
