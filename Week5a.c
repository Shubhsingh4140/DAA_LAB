#include <stdio.h>
int main()
{
    int test, k, i, size;
    printf("enter the number of test cases\n");
    scanf("%d", &test);
    for (k = 0; k < test; k++)
    {
        printf("enter the size of the array\n");
        scanf("%d", &size);
        char arr[size];
        getchar();
        scanf("%c", &arr[0]);
        char max = arr[0];
        for (i = 1; i < size; i++)
        {
            scanf("%c", &arr[i]);
            if (arr[i] > max)
                max = arr[i];
        }
        for (i = 0; i < size; i++)
        {
            printf("%c\t", arr[i]);
        }
        printf("\n%c\n", max);
        int n = max - 96;
        int c[n];
        for (i = 0; i < n; i++)
        {
            c[i] = 0;
        }
        for (i = 0; i < size; i++)
        {
            int cp = arr[i];
            c[cp - 97] += 1;
        }
        for (i = 0; i < n; i++)
        {
            printf("%d\t", c[i]);
        }
        int f = 0;
        int maxch = 0;
        for (i = 0; i < n; i++)
        {
            if (c[i] <= 1)
                f++;
        }
        if (f == n)
            printf("No Duplicates\n");
        else
        {
            for (i = 0; i < n; i++)
            {
                if (c[i] >c[maxch])
                {
                    maxch = i;
                }
            }
            printf("\nCharacter=%c\t freq=%d", maxch + 97, c[maxch]);
        }
    }
    return 0;
}