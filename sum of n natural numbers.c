/*
Algorithm of sum of n natural numbers!

1. Start
2. int i,sum=0;
3. for(i=1;i<=n;i++)
sum=sum+i;

then
print-sum
4.Stop
*/

//Program:-

#include<stdio.h>
void main()
{
	int n,sum=0,i;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	
	printf("Summation of number: %d ",sum);
}


