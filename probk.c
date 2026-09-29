#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[1200];
    int arr[123] = {0};
    while (scanf(" %[^\n]", s) != EOF)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            s[i] = tolower(s[i]);
        }
        int i = 0;
        while (s[i] != '\0')
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                arr[s[i]]++;
            }
            i++;
        }
    }
    for (int i = 97; i <= 122; i++)
    {
        printf("%c : %d\n", i, arr[i]);
    }
    return 0;
}