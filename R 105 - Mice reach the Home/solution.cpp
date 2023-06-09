#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, tmp, max = 0;
    cin >> n;
    vector<int> mP;   // mice position
    vector<int> hole; // hole position
    for (i = 0; i < n; i++)
    {
        cin >> tmp;
        mP.push_back(tmp);
    }
    for (i = 0; i < n; i++)
    {
        cin >> tmp;
        hole.push_back(tmp);
    }
    sort(mP.begin(), mP.end());
    sort(hole.begin(), hole.end());
    for (i = 0; i < n; i++)
    {
        if (max < abs(mP[i] - hole[i]))
        {
            max = abs(mP[i] - hole[i]);
        }
    }
    cout << max;
    return 0;
}