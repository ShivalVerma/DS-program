#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int n = 5;                          
    int element, position, i;

    printf("Original array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d) where you want to insert: ", n + 1);
    scanf("%d", &position);

    if (position < 1 || position > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }
    if (n >= 100) {
        printf("Array is full. Cannot insert more elements.\n");
        return 1;
    }

    for (i = n - 1; i >= position-1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position-1] = element;
    n++;
    
    printf("Array after insertion:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

