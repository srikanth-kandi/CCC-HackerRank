#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int sp, n, tmp, i;
    cin >> sp;
    cin >> n;
    vector<int> arr;
    for (i = 0; i < n; i++)
    {
        cin >> tmp;
        if (sp <= tmp)
        {
            printf("-1");
            return 0;
        }
        arr.push_back(tmp);
    }
    int day = 1, restore = sp;
    for (i = 0; i < n;)
    {
        if (arr[i] < restore)
        {
            restore -= arr[i];
            i++;
        }
        else
        {
            day++;
            restore = sp;
        }
    }
    printf("%d", day);
    return 0;
}