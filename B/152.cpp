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
    vector<string> vec;
    for (int i = 0; i < b; i++)
    {
        A += (char)('0' + a);
    }
    for (int i = 0; i < a; i++)
    {
        B += (char)('0' + b);
    }
    vec.push_back(A);
    vec.push_back(B);
    sort(vec.begin(), vec.end());
    cout << vec[0] << endl;
}