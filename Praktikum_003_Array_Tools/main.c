//
// Created by Nassar, Mohamad Adnan on 30.11.21.
//


#include "arrayTools.h"
#include <stdio.h>

int main() {
    int array1D[10];
    fillArray(array1D, 10);
    printf("Array 1D: \n");
    printArray(array1D, 10);

    int array2D[10][10];
    fillArray2d(10, array2D);
    printf("\nArray 2D: \n");
    printArray2d(10, array2D);

    return 1;
}

