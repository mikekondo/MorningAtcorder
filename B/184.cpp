#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'o')
        {
            x += 1;
        }
        else if (s[i] == 'x' && x > 0)
        {
            x -= 1;
        }
    }
    cout << x << endl;
}