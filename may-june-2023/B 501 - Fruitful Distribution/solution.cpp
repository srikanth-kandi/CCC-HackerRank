#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (i % 2 == 0 && (n - i) % 2 == 0)
        {
            cout << "YES";
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "NO";
    }
    return 0;
}