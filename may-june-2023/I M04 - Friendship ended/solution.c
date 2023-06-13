#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{

    char s[10000];
    scanf("%s", s);
    char res[10] = "Goodbye";

    int n = strlen(s);

    int a = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == res[a])
        {
            a++;
            count++;
        }
    }

    if (count == 7)
        printf("Yes");
    else
        printf("No");

    return 0;
}
