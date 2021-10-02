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
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < k; i++)
    {
        int d;
        cin >> d;
        for (int j = 0; j < d; j++)
        {
            int a;
            cin >> a;
            mp[a] = 1;
        }
    }
    cout << n - mp.size() << endl;
}