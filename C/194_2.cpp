#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <bitset>
using namespace std;
int main()
{
    int MaxA = 200;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> d(MaxA * 2 + 1);
    for (int i = 0; i < n; i++)
    {
        d[MaxA + a[i]]++;
    }
    long long ans = 0;
    for (int ai = -MaxA; ai <= MaxA; ++ai)
    {
        for (int aj = -MaxA; aj <= MaxA; ++aj)
        {
            long long x = ai - aj;
            ans += x * x * d[MaxA + ai] * d[MaxA + aj];
        }
    }
    cout << ans << endl;
}