// bubble sort
#include <stdio.h>

int main()
{
    int arr[] = {10, 3, 5, 8, 4};
    int size = 5;

    // for swapping
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    // for printing
    for (int j = 0; j < 5; j++)
    {
        printf(" %d ", arr[j]);
    }
}