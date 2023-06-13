#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, res;
    cin >> t;
    long long a, b, k, mi, ma;
    while (t--)
    {
        res = 0;
        cin >> a >> b >> k;
        mi = min(a, b);
        ma = max(a, b);
        res = k / mi;
        k -= k / mi;
        cout << res << endl;
    }
    return 0;
}