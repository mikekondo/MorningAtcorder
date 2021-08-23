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
    int k;
    cin >> k;
    sort(s.begin(), s.end());
    for (int i = 0; i < k - 1; i++)
    {
        next_permutation(s.begin(), s.end());
    }
    cout << s << endl;
}