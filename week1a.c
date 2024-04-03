#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int num, i, j, f;
    printf("Enter the number to be searched\n");
    scanf("%d", &num);
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == num)
            f = 1;
        break;
    }
    if (f == 1)
        printf("Number found\n");
    else
        printf("Number not found\n");

    return 0;
}