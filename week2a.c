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
        int key, x;
        int c = 0;
        printf("\nenter  the element that is to be searched\n");
        scanf("%d", &key);
        x = BinarySearch(arr, 0, size, key);//logn
        if (x != -1)
        {
            c++;
            int a = x;
            int b = x;
            int l, r;
            while (a >= 0 && b < size)
            {
                l = BinarySearch(arr, 0, a - 1, key);
                if (l != -1)
                {
                    c = c + (a - l);
                }
                a = l;
            }
            while (b < size && b != -1)
            {
                r = BinarySearch(arr, b + 1, size, key);
                if (r != -1)
                {
                    c = c + (r - b);
                }
                b = r;
            }
            printf("element found \nfreq=%d", c);
        }
    }
}