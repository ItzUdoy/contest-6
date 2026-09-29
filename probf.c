#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x[n], y[n], z[n];
    int sumx = 0, sumy = 0, sumz = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &x[i], &y[i], &z[i]);
        sumx += x[i];
        sumy += y[i];
        sumz += z[i];
    }
    if (sumx || sumz || sumy)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}