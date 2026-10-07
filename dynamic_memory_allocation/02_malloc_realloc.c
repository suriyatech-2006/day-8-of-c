#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, new_n, i;
    int *arr;
    int *temp;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter total number of elements after increasing the size: ");
    scanf("%d", &new_n);

    if (new_n < n) {
        printf("New size must be greater than or equal to the initial size.\n");
        free(arr);
        return 1;
    }

    temp = (int *)realloc(arr, new_n * sizeof(int));

    if (temp == NULL) {
        printf("Memory reallocation failed.\n");
        free(arr);
        return 1;
    }

    arr = temp;

    if (new_n > n) {
        printf("Enter %d new elements:\n", new_n - n);
        for (i = n; i < new_n; i++) {
            scanf("%d", &arr[i]);
        }
    }

    printf("All elements:\n");
    for (i = 0; i < new_n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    free(arr);

    return 0;
}
