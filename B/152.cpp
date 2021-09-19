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
    vector<string> vecs;
    for (int i = 0; i < a; i++)
    {
        B += (char)('0' + b);
    }
    for (int i = 0; i < b; i++)
    {
        A += (char)('0' + a);
    }
    vecs.push_back(B);
    vecs.push_back(A);
    sort(vecs.begin(), vecs.end());
    cout << vecs[0] << endl;
}