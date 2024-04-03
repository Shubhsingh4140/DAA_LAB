#include <stdio.h>
int main()
{
    int i, size, j, comparisons, key, swaps;
    printf("enter the size of the array\n");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
    printf("\n");
    for (i = 0; i < size - 1; i++)
    {
        key = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[key])
            {
                key = j;
            }
            comparisons++;
        }
        if (key != i)
        {
            int temp;
            swaps++;
            temp = arr[i];
            arr[i] = arr[key];
            arr[key] = temp;
        }
    }
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
    printf("\nComparisons=%d\nSwaps=%d\n", comparisons, swaps);

    return 0;
}