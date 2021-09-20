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
    vector<string> vec(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> vec[i];
    }
    string t;
    cin >> t;
    for (int i = 0; i < t.size(); i++)
    {
        int henkan = (int)(t[i]);
        // cout << henkan << endl;
        henkan -= 49;
        cout << vec[henkan];
    }
}