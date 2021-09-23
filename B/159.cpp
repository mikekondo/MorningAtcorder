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
    cin >> s;
    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());
    if (reverse_s != s)
    {
        cout << "No" << endl;
        return 0;
    }
    string s_front;
    string s_back;
    for (int i = 0; i < (s.size() - 1) / 2; i++)
    {
        s_front += s[i];
    }
    for (int i = (s.size() + 3) / 2 - 1; i < s.size(); i++)
    {
        s_back += s[i];
    }
    string no_reverse_s_front = s_front;
    string no_recerse_s_back = s_back;
    reverse(s_front.begin(), s_front.end());
    reverse(s_back.begin(), s_back.end());
    if ((s_front == no_reverse_s_front) && (s_back == no_recerse_s_back))
    {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
}