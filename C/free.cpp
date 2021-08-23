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
    long long n;
    cin >> n;
    long long ans = 1;
    long long k = 0;
    while (ans <= n)
    {
        ans *= 2;
        k++;
    }
    if (k != 0)
    {
        cout << k - 1 << endl;
        return 0;
    }
    cout << k << endl;
}