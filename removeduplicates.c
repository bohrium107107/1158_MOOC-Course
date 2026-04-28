#include <stdio.h>

int main() {
    int arr[50], unique[50], i, j, n, uniqueCount = 0;
    int isUnique;

    printf("Enter number of elements (max 50): ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    /* Find unique elements */
    for(i = 0; i < n; i++) {
        isUnique = 1;
        for(j = 0; j < uniqueCount; j++) {
            if(arr[i] == unique[j]) {
                isUnique = 0;
                break;
            }
        }
        if(isUnique) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    printf("\nUnique elements: ");
    for(i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
