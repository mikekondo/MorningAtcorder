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
    vector<int> vec(26);
    for (int i = 0; i < 26; i++)
    {
        cin >> vec[i];
        char a = (char)('a' + vec[i] - 1);
        cout << a;
    }
}