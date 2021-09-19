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
    vector<string> vecS(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> vecS[i];
    }
    string t;
    string ans;
    cin >> t;
    for (int i = 0; i < t.size(); i++)
    {
        int index = (int)(t[i]);
        index -= 49;
        ans += vecS[index];
    }
    cout << ans << endl;
}