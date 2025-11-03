#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50}; 
    int n = 5,i;                           
    int element;           

    printf("Array before insertion:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for ( i = n - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    
	printf("Enter the element you want to insert: ");
	scanf("%d",&element);  
	arr[0]=element;
	n++;

    printf("Array after insertion:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
