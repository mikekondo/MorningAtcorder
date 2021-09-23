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
    long long sum = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            continue;
        }
        else if (i % 3 == 0)
        {
            continue;
        }
        else if (i % 5 == 0)
        {
            continue;
        }
        sum += i;
    }
    cout << sum << endl;
}