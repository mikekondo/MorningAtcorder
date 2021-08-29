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
int gcd(int x, int y)
{
    if (x % y == 0)
    {
        return y;
    }
    else
    {
        return gcd(y, x % y);
        //x%y==0でないときはユーグリットの互除法を使って再帰的に関数を呼び出す。
    }
}
int main()
{
    int k;
    cin >> k;
    long long sum = 0;
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            for (int z = 1; z <= k; z++)
            {
                ans = gcd(i, j);
                sum += gcd(ans, z);
            }
        }
    }
    cout << sum << endl;
}