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
    int n;
    cin >> n;
    if (n > 0 && n < 126)
    {
        cout << "4" << endl;
    }
    else if (n > 125 && n < 212)
    {
        cout << "6" << endl;
    }
    else if (n > 211 && n < 215)
    {
        cout << "8" << endl;
    }
}