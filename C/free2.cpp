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
    long long count = 0;
    long long ans = 1;
    vector<string> s;
    s.push_back("A");
    if (ans == n)
    {
        for (long long i = 0; i < s.size(); i++)
        {
            cout << s[i];
        }
    }
    while (ans < n && count <= 120)
    {
        ans *= 2;
        if (ans == n)
        {
            s.push_back("B");
            for (long long i = 0; i < s.size(); i++)
            {
                cout << s[i];
            }
            cout << s.size() << endl;
            return 0;
        }
        if (ans > n)
        {
            ans /= 2;
            for (long long i = ans; i <= n; i++)
            {
                ans += 1;
                s.push_back("A");
                count++;
                if (ans == n)
                {
                    for (long long i = 0; i < s.size(); i++)
                    {
                        cout << s[i];
                    }
                    cout << s.size() << endl;
                    return 0;
                }
                if (count == 120)
                {
                    for (long long i = 0; i < s.size(); i++)
                    {
                        cout << s[i];
                    }
                    cout << s.size() << endl;
                    return 0;
                }
            }
        }
        s.push_back("B");
        count++;
        if (ans == n)
        {
            for (long long i = 0; i < s.size(); i++)
            {
                cout << s[i];
            }
            cout << s.size() << endl;
            return 0;
        }
        if (count == 120)
        {
            for (long long i = 0; i < s.size(); i++)
            {
                cout << s[i];
            }
            cout << s.size() << endl;
            return 0;
        }
    }
}