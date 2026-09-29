#include <stdio.h>

int main()
{
    int x, y;
    int max = 0;
    int sum = 0;
    int t;
    scanf("%d", &t);
    while (t--)
    {

        scanf("%d %d", &x, &y);
        sum = sum - x + y;
        if (max < sum)
            max = sum;
    }
    printf("%d\n", max);
    return 0;
}