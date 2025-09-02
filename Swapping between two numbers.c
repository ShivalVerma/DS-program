#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter value of a before swap: ");
	scanf("%d",&a);
	printf("Enter value of b before swap: ");
	scanf("%d",&b);
	
	c=b;
	b=a;
	a=c;
	
	printf("Value of a after swap: %d \n",a);
	printf("Value of b after swap: %d ",b);
	
	return 0;
}
