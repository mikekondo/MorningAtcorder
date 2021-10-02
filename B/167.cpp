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
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    long long sum = 0;
    while (k > 0)
    {
        if (a > 0)
        {
            sum += 1;
            a--;
            k--;
        }
        else if (b > 0)
        {
            b--;
            k--;
        }
        else if (c > 0)
        {
            sum -= 1;
            c--;
            k--;
        }
    }
    cout << sum << endl;
}