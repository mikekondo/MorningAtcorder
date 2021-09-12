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
    vector<int> vec;
    for (int i = 0; i < 26; i++)
    {
        int n;
        cin >> n;
        vec.push_back(n);
    }
    for (int i = 0; i < 26; i++)
    {
        char s = (char)('a' + vec[i] - 1);
        cout << s;
    }
}