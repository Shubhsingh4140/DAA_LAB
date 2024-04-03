// quicksort
#include <stdio.h>
int comp = 0;
int swaps = 0;
void swap(int arr[], int x, int y)
{
    swaps++;
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}
int quick(int arr[], int l, int r)
{
    int x = arr[r];
    int i = l - 1;
    int j;
    for (j = l; j < r; j++)
    {
        comp++;
        if (arr[j] <= x)
        {
            i = i + 1;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}
void quicksort(int arr[], int l, int r)
{
    if (l < r)
    {
        int q = quick(arr, l, r);
        quicksort(arr, l, q - 1);
        quicksort(arr, q + 1, r);
    }
}
int main()
{
    int size, i;
    printf("Enter the size\n");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    quicksort(arr, 0, size - 1);
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\nSwaps=%d\nComparisons=%d\n", swaps, comp);

    return 0;
}