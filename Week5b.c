#include <stdio.h>
void swap(int arr[], int x, int y)
{
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
int binarysearch(int arr[], int l, int r, int num)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] > num)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int test, size, i, j, k;
    printf("enter the number of test cases\n");
    scanf("%d", &test);
    for (k = 0; k < test; k++)
    {
        printf("enter the size of the array\n");
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
        int key, x;
        quicksort(arr, 0, size - 1);
        for (i = 0; i < size; i++)
        {
            printf("%d\t", arr[i]);
        }
        printf("\nenter the key element\n");
        scanf("%d", &key);
        for (i = 0; i < size; i++)
        {
            int a = key - arr[i];
            if (a > 0)
            {
                x = binarysearch(arr, 0, size, a);
                if (x != -1)
                    printf("%d,%d\n", arr[i], arr[x]);
            }
        }
    }
    return 0;
}