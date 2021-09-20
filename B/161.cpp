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
    int n, m;
    cin >> n >> m;
    vector<int> vec(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    sum /= 4 * m;
    //cout << sum << endl;
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] >= sum)
        {
            count++;
        }
        if (count == m)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}