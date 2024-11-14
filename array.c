#include <stdio.h>
#include <stdbool.h>
#include <memory.h>


// I definitely think that I should be using _generics, that way I wont need to worry about writing functions for different data types
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