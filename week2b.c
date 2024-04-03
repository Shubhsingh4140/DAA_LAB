#include <stdio.h>
int BinarySearch(int arr[], int l, int r, int key)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
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
    int k, i, test, size;
    printf("enter the no .of test case\n");
    scanf("%d", &test);
    for (k = 0; k < test; k++)
    {
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
        int j;
        for (i = 0; i < size - 1; i++)
        {
            for (j = i + 1; j < size; j++)
            {
                int sum = arr[i] + arr[j];
                int x = BinarySearch(arr, 0, size, sum);
                if (x != -1)
                    printf("\n%d\t%d\t%d", i, j, x);
            }
        }
    }
}
