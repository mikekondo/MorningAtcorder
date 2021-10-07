#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
    int n, m, t;
    cin >> n >> m >> t;
    int battery = n;
    vector<int> a(m);
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    //最初のカフェに行き着くまでのバッテリー消費
    n -= a[0];
    if (n <= 0)
    {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < m; i++)
    {
        n += b[i] - a[i];
        if (battery <= n)
        {
            n = battery;
        }
        if (i != m - 1)
        {
            n -= a[i + 1] - b[i];
        }
        else
        {
            n -= t - b[i];
        }
        if (n <= 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}