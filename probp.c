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
    int a;
    while (1)
    {
        scanf("%d", &a);
        if (a == 0)
            break;
        for (int i = 2; i <= a; i++)
        {
            if (prime(i))
            {
                if (prime(a - i))
                {
                    printf("%d = %d + %d\n", a, i, a - i);
                    break;
                }
            }
        }
    }

    return 0;
}