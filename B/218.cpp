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
    vector<int> p(26);
    for (int i = 0; i < 26; i++)
    {
        cin >> p[i];
        cout << char(p[i] - 1 + 'a');
    }
}