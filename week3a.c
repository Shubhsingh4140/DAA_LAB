#include <stdio.h>
int main()
{
    int i, size, j, comparisons, key;
    printf("enter the size of the array\n");
    scanf("%d", &size);
    int arr[size];
    scanf("%d", &arr[0]);
    for (j = 1; j < size; j++)
    {
        scanf("%d", &arr[j]);
        i = j - 1;
        key = arr[j];
        while (i >= 0 && arr[i] >= key)
        {
            arr[i + 1] = arr[i];
            i--;
            comparisons++;
        }
        arr[i + 1] = key;
    }
    for (i = 0; i < size; i++)
        printf("%d\t", arr[i]);
    printf("\nComparisons=%d\n", comparisons);

    return 0;
}