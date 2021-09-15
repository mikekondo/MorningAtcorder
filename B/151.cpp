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
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> a(n - 1);
    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    long long ansNum = n * m;
    long long ans = ansNum - sum;
    if (ans <= 0)
    {
        cout << "0" << endl;
    }
    else if (ans <= k && ans > 0)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}