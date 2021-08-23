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
    vector<int> vec(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    map<long long, long long> mp;
    for (int i = 0; i < n; i++)
    {
        mp[vec[i] % 200] += 1;
    }
    long long sum = 0;
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        long long n = i->second;
        if (n >= 2)
        {
            long long combination = (n * (n - 1)) / 2;
            sum += combination;
        }
    }
    cout << sum << endl;
}