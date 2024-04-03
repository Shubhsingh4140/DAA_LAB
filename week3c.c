#include<stdio.h>
int cmp=0;
void merge(int arr[], int l, int mid, int r);
void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
void merge(int arr[], int l, int mid, int r)
{
    int i, j, k;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int left[n1];
    int right[n2];
    for (i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++)
    {
        right[j] = arr[mid + j + 1];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] < right[j])
        {
            arr[k] = left[i];
            i++;
            k++;
            cmp++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            k++;
            cmp++;
        }
    }
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n1)
    {
        arr[k] = right[j];
        j++;
        k++;
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
    int f=0;
    mergesort(arr, 0, size - 1);
    for (i = 0; i < size; i++)
    {
        if(arr[i]==arr[i+1])
        {
          f=1;
        }
    }
    if(f==1)
      printf("yes\n");
    else
      printf("no\n");
  


    return 0;
}