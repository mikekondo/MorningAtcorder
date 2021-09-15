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
    int a, b;
    cin >> a >> b;
    string A;
    string B;
    char _a = '0' + a;
    char _b = '0' + b;
    for (int i = 0; i < b; i++)
    {
        A += _a;
    }
    for (int i = 0; i < a; i++)
    {
        B += _b;
    }
    if (A >= B)
    {
        cout << B << endl;
    }
    else if (A <= B)
    {
        cout << A << endl;
    }
}