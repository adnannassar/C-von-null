//
// Created by Nassar, Mohamad Adnan on 30.11.21.
//

#include "arrayTools.h"
#include <stdio.h>

void printArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
}

void fillArray(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        array[i] = i * 10;
    }
}


void printArray2d(int length, int array [length][length])
{
    for (int i = 0; i < length; i++)
    {
        for (int j= 0; j < length; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}

void fillArray2d(int length, int array [length][length])
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            array[i][j] = i * j + 2;
        }

    }
}
