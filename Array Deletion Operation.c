#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int n = 5;                          
    int position, i;

    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the position of element you want to delete: ");
    scanf("%d", &position);

    for (i = position; i<n; i++) {
        arr[i] = arr[i+1];
    }
    n--;
    
    printf("Array after deletion of element:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

