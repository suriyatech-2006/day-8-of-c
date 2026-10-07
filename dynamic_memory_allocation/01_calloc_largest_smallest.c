#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    int largest, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    free(arr);

    return 0;
}
