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
    int count = 0;
    while (n > 0)
    {
        n /= k;
        count++;
    }
    cout << count << endl;
}