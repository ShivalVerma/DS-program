#include<stdio.h>

int main()
{
	int arr[]={10,20,30,40,50},i;
	int n=5,f=0;
	int ele;
	
	printf("Enter the element you want to search: ");
    scanf("%d", &ele);
    
    for(i=0; i<n; i++)
    {
    	if(arr[i]==ele)
    	{
    		f=1;
    		printf("Element found index %d",i);
    		break;

		}
	}
	
	if(f==0)
	printf("Element not found ");
	
	return 0;
}

