#include <stdio.h>
#include <stdlib.h>
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
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int num, i, j, f;
    printf("Enter the number to be searched\n");
    scanf("%d", &num);
    int x = binarysearch(arr, 0, 10, num);
    if (x != -1)
        printf("Number found\n");
    else
        printf("Number not found\n");

    return 0;
}