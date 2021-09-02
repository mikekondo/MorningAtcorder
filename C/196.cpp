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
    long long x = 1;
    long long sum = 1;
    for (int i = 1; i < 1000000; i++)
    {
        string s = to_string(i);
        long long N = stoll(s + s);
        if (N <= n)
        {
            sum += 1;
        }
        else
        {
            break;
        }
    }
    cout << sum - 1 << endl;
}