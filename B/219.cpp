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
    vector<string> s(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> s[i];
    }
    string t;
    cin >> t;
    string ans;
    for (int i = 0; i < t.size(); i++)
    {
        ans += s[t[i] - 49];
    }
    cout << ans << endl;
}