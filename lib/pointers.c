//
// Created by Josean Camarena on 07/07/22.
// Implemented by: $STUDENT$
//
#include <stdio.h>
#include "pointers.h"

int bubble_sort(int *collection, int count)
{
    int times = 0;

    for (int i = 0; i < count; i++)
    {
        for (int j = i; j < count; j++)
        {
            if (*(collection+i)>*(collection+j))
            {
                int pivot = *(collection+i);
                *(collection+i) = *(collection+j);
                *(collection+j) = pivot;
                times++;
            }
        }
    }
    return times;
}

void insertion_sort(int *collection, int count)
{
    for (int i = 0; i < count; i++)
    {
        int j = i + 1;
        while (*(collection + i) > *(collection + j) && j < count)
        {
            int pivot = *(collection + i);
            *(collection + i) = *(collection + j);
            *(collection + j) = pivot;
            j ++;
        }
    }
}

void reverse(int *collection, int count)
{
    int last = count-1;

    for (int i = 0; i < count/2;i++)
    {
        int pivot = *(collection+i);
        *(collection+i) = *(collection+last);
        *(collection+last) = pivot;
        last -= 1;
    }
}

int calulate_frequency(int *collection, int count, int target)
{
    int frecuency = 0;
    for (int i = 0; i < count; i++)
    {
        if ( *(collection+i) == target)
        {
            frecuency +=1;
        }
    }
    return frecuency;
}
