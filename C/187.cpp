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
    vector<string> vec(n);
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        mp[vec[i]] += 1;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp["!" + vec[i]] >= 1)
        {
            cout << vec[i] << endl;
            return 0;
        }
    }
    cout << "satisfiable" << endl;
}