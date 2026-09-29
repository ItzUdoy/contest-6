#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    int brr[a + 1];
    int crr[b + 1];
    for (int i = 0; i < a + 1; i++)
    {
        brr[i] = 0;
    }
    for (int i = 0; i < b + 1; i++)
    {
        crr[i] = 0;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
            brr[i] += arr[i][j];
            crr[j] += arr[i][j];
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("%d\n", brr[i]);
    }
    for (int j = 0; j < b; j++)
    {
        printf("%d ", crr[j]);
    }
    int total = 0;

    for (int i = 0; i < a; i++)
    {
        total += brr[i];
    }

    printf("%d\n", total);

    return 0;
}