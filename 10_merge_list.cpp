#include <stdio.h>

int main() {
    int size1, size2;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr1[size1];
    int arr2[size2];

    printf("Enter elements of the first array in sorted order:\n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of the second array in sorted order:\n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[size1 + size2];
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        merged[k++] = arr1[i++];
    }
    while (j < size2) {
        merged[k++] = arr2[j++];
    }
    printf("Merged List: ");
    for (int m = 0; m < size1 + size2; m++) {
        printf("%d ", merged[m]);
    }
    return 0;
}
