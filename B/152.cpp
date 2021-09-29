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
    string a_b;
    string b_a;
    for (int i = 0; i < b; i++)
    {
        a_b += to_string(a);
    }
    for (int i = 0; i < a; i++)
    {
        b_a += to_string(b);
    }
    if (a_b >= b_a)
    {
        cout << b_a << endl;
    }
    else
    {
        cout << a_b << endl;
    }
}