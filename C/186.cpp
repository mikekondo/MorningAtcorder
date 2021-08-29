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
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int n = i;
        while (n >= 1)
        {
            int mod = 0;
            mod = n % 10;
            if (mod == 7)
            {
                mp[i] = 1;
            }
            n = n / 10;
        }
        int nn = i;
        while (nn >= 1)
        {
            int mod = 0;
            mod = nn % 8;
            if (mod == 7)
            {
                mp[i] = 1;
            }
            nn = nn / 8;
        }
    }
    cout << n - mp.size() << endl;
}