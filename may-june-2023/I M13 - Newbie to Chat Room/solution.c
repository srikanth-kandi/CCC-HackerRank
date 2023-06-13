#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[1000];
    scanf("%s", s);
    char res[10] = "hello";

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
    if (count == 5)
        printf("YES");
    else
        printf("NO");

    return 0;
}