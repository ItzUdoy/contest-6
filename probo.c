#include <stdio.h>
int prime(int a)
{
    if (a < 2)
        return 0;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int n, k, count = 0, prev = 0;
    scanf("%d %d", &n, &k);
    for (int i = 2; i <= n; i++)
    {
        if (prime(i))
        {
            if (prev != 0 && prime(prev + 1 + i) && prev + i + 1 <= n)
            {
                count++;
            }
            prev = i;
        }
    }

    count >= k ? printf("YES") : printf("NO");
    return 0;
}