#include <stdio.h>

// in-place
// stable
// worst performance: O(n^2)
// best performance: O(n^2)
// average performance: O(n^2)

void bubbleSort(int* list, int len) {
    int i, j;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            // swap list[j] with list[j+1] whenever list[j] > list[j+1]
            if (list[j] > list[j + 1]) {
                list[j] = list[j + 1] ^ list[j];
                list[j + 1] = list[j + 1] ^ list[j];
                list[j] = list[j + 1] ^ list[j];
            }
        }
    }
}

void printList(int* list, int len) {
    int i = 0;
    for (i = 0; i < len; i++) {
        printf("%d ", list[i]);
    }
    printf("\n");
}

int main() {
    int list[] = {8, 7, 5, 6, 4, 2, 3, 1};
    int len = sizeof(list) / sizeof(list[0]);
    printf("list: ");
    printList(list, len);
    // list: 8 7 5 6 4 2 3 1
    bubbleSort(list, len);
    printf("sorted list: ");
    printList(list, len);
    // sorted list: 1 2 3 4 5 6 7 8
    return 0;
}