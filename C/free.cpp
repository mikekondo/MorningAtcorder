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
    vector<string> s;
    s.push_back("A");
    for (int i = 1; i < 120; i++)
    {
        ans *= 2;
        if (ans >= n)
        {
            ans /= 2;
            for (int i = ans; i < n; i++)
            {
                s.push_back("A");
            }
            return 0;
        }
        s.push_back("B");
    }
    cout << s.size() << endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
}