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
    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            long long element = a[i] - a[j];
            element = pow(element, 2);
            sum += element;
        }
    }
    cout << sum << endl;
}