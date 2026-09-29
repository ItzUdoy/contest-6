#include <stdio.h>
#include <string.h>
int main()
{
    char s[101], S[202] = {0};
    scanf("%s", s);
    strlwr(s);
    int i = 0, j = 0;
    while (s[i] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            i++;
        else
        {

            printf(".%c", s[i]);
            i++;
        }
    }
    printf("\n");
        return 0;
    }