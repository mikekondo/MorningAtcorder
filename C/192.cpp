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
    int n, k;
    cin >> n >> k;
    int result = n;
    for (int i = 0; i < k; i++)
    {
        string N = to_string(result);
        sort(N.begin(), N.end());
        int min = stoi(N);
        sort(N.begin(), N.end(), greater<int>());
        int max = stoi(N);
        result = max - min;
    }
    cout << result << endl;
}