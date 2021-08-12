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
    vector<string> vec;
    string s = "abcABC";
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] - '0' << endl;
    }
}