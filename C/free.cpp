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
    string s;
    cin >> s;
    int ans = 0;
    for (int num = 0; num < 10000; num++)
    {
        vector<int> a(10);
        int x = num;
        for (int i = 0; i < 4; i++)
        {
            int d = x % 10;
            a[d] = 1;
            x /= 10;
        }
        bool ok = true;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] == 'o' && a[i] != 1)
                ok = false;
            if (s[i] == 'x' && a[i] != 0)
                ok = false;
        }
        if (ok)
            ++ans;
    }
    cout << ans << endl;
    return 0;
}