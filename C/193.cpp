#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
int main(void)
{
    long long N;
    long long a = 2;
    long long b;
    map<long, long> mp;
    cin >> N;
    while ((long long)sqrt(N) >= a)
    {
        for (b = 2; pow(a, b) <= N; b++)
        {
            mp[pow(a, b)]++;
        }
        a++;
    }
    cout << N - mp.size() << endl;
    return 0;
}