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
    long long twoN = pow(2, n);
    vector<int> vec(twoN);
    for (int i = 0; i < twoN; i++)
    {
        cin >> vec[i];
    }
    for (int i = 0; i < twoN; i++)
    {
        cout << vec[i] << endl;
    }
}