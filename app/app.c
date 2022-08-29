#include "pointers.h"
#include <stdio.h>

int main(void)
{
    int collection[] = {0,9,18,-65,-90,0,0,1};
    int count=8;

    int swaps = bubble_sort(collection, count);

    for (int i=0;i<count;i++)
    {
        printf("%d ",collection[i]);
    }
    printf("\n%d",swaps);

    return 0;
}
