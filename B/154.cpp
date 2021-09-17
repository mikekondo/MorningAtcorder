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
    string s;
    string ans;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        ans += 'x';
    }
    cout << ans << endl;
}