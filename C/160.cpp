#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <iomanip>
using namespace std;
using ll = long long;
int main()
{
    int k, n;
    cin >> k >> n;
    vector<int> a(n);
    long long max_edge = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a.push_back(a[0] + k);
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        long long edge = a[i + 1] - a[i];
        max_edge = max(max_edge, edge);
    }
    long long ans = k - max_edge;
    cout << ans << endl;
}