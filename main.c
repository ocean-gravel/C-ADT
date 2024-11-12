#include "mylib.h"
#include "array.h"
#include <stdio.h>
#include <stdbool.h>


int main() {
    hello();
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {1, 2, 3, 4, 5};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    if (equals(arr1, arr2, size1, size2)) {
        printf("Arr1 and Arr2 are equal\n");
    } else {
        printf("Nuh uh, they aren't equal\n");
    }

    return
}