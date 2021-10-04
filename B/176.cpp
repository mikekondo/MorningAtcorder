#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <fstream>
using namespace std;
int main()
{
    string n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n.size(); i++)
    {
        sum += int(n[i] - '0');
    }
    if (sum % 9 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}