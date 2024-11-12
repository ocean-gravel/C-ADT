#include <stdio.h>
#include <stdbool.h>
#include <memory.h>


bool equals(int *A, int *B,int sizeA, int sizeB) {
    printf("Size of A: %d \n", sizeA);
    printf("Size of B: %d \n", sizeB);

    if (sizeA != sizeB) return false; 

    for (size_t i = 0; i < sizeA; i++) {
        if (A[i] != B[i]) {
            return false; 
        }
    }
    return true; 
}