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
    int n;
    cin >> n;
    vector<int> a(n);
    int maxA = 200;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> d(maxA * 2 + 1);
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j < i; j++)
        // {
        //     int x = a[i] - a[j];
        //     ans += x * x;
        // }
        for (int aj = -maxA; aj <= maxA; ++aj)
        {
            int c = d[maxA + aj];
            int x = a[i] - aj;
            ans += (long long)x * x * c;
        }
        d[maxA + a[i]]++;
    }
    cout << ans << endl;
    return 0;
}