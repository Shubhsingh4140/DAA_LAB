#include <stdio.h>
void swap(int arr[], int x, int y)
{
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}
void heapify(int arr[], int i, int n)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest;
    if (l < n && arr[l] > arr[i])
        largest = l;
    else
        largest = i;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        swap(arr, largest, i);
        heapify(arr, largest, n);
    }
}
void buildmaxheap(int arr[], int n)
{
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        heapify(arr, i, n);
    }
}
void heapsort(int arr[], int n, int k)
{
    buildmaxheap(arr, n);
    for (int i = n - 1; i > n - (k + 1); i--)
    {
        swap(arr, 0, i);
        heapify(arr, 0, i);
    }
}
int main()
{
    int size, i, key;
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
    printf("\nEnter the kth largest element you need to find\n");
    scanf("%d", &key);
    heapsort(arr, size, key);
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n%d", arr[size - key]);

    return 0;
}