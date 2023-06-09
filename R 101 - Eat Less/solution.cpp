#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, tmp, cnt = 0;
    cin >> n;
    vector<int> arr;
    for (i = 0; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    long int res = 0;
    for (i = n - 1; i >= 0; i--)
    {
        res += arr[i] * pow(2, cnt);
        cnt++;
    }
    cout << res;
    return 0;
}