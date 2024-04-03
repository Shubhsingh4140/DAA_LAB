#include <stdio.h>
int main()
{
    int k, size1, size2, test;
    printf("enter the number of test cases\n");
    scanf("%d", &test);
    for (k = 0; k < test; k++)
    {
        int i;
        printf("enter the size of 1 st array\n");
        scanf("%d", &size1);
        int n[size1];
        scanf("%d", &n[0]);
        int max1 = n[0];
        for (i = 1; i < size1; i++)//size1
        {
            scanf("%d", &n[i]);
            if (n[i] > max1)
                max1 = n[i];
        }
        printf("enter the size of 2nd array\n");
        scanf("%d", &size2);
        int m[size2];
        scanf("%d", &m[0]);
        int max2 = m[0];
        for (i = 1; i < size2; i++)//size2
        {
            scanf("%d", &m[i]);
            if (m[i] > max2)
                max2 = m[i];
        }
        for (i = 0; i < size1; i++)//size1
        {
            printf("%d\t", n[i]);
        }
        printf("\n");
        for (i = 0; i < size2; i++)//size2
        {
            printf("%d\t", m[i]);
        }
        printf("\n");
        int m1 = max1 + 1;
        int m2 = max2 + 1;
        int c1[m1];
        int c2[m2];
        for (i = 0; i < m1; i++)//max1
        {
            c1[i] = 0;
        }
        for (i = 0; i < m2; i++)//max2
        {
            c2[i] = 0;
        }
        for (i = 0; i < size1; i++)//size1
        {
            c1[n[i]] += 1;
        }
        for (i = 0; i < size2; i++)//size1
        {
            c2[m[i]] += 1;
        }
        for (i = 0; i < m1; i++)//max1
        {
            printf("%d\t", c1[i]);
        }
        printf("\n");
        for (i = 0; i < m2; i++)//max2
        {
            printf("%d\t", c2[i]);
        }
        printf("\n");
        int newsize;
        if (m1 >= m2)
        {
            newsize = m2;
        }
        else
        {
            newsize = m1;
        }
        for (i = 0; i < newsize; i++)//size1 or size2 ,the one which is less
        {
            if (c1[i] >= 1 && c2[i] >= 1)
            {
                printf("%d\t", i);
            }
        }
        printf("\n");
    }
    return 0;
}