#include<stdio.h>
int binary(int arr[],int low, int high, int n)
{
	if(low>high){
	return -1;}
	
	int mid= (low+high)/2;
	
	if(arr[mid]==n)
	return mid;
	
	else if(arr[mid]<n)
	return binary(arr,mid+1,high,n);
	
	else
	return binary(arr,low,mid-1,n);

}
int main()
{
	int arr[]={1,2,3,4,5};
	
	int size=sizeof(arr);
	int n;
	
	printf("Enter the element you want to search: ");
    scanf("%d", &n);
	
	int result=binary(arr,0,4,n);
	
	if(result==-1)
	printf("Elemet not  found");
	
	else
	printf("Element found at %d index",result);
}
