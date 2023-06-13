#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
            c++;
    }
    cout << c;
    return 0;
}