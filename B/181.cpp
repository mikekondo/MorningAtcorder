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
    int n;
    cin >> n;
    long long ans = 0;
    for (long long i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;
        ans += b * (b + 1) / 2 - a * (a - 1) / 2;
    }
    cout << ans << endl;
    return 0;
}