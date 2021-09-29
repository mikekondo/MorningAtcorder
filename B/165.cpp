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
    long long x = 0;
    cin >> x;
    long long sum = 100;
    long long count = 0;
    while (sum < x)
    {
        sum += sum / 100;
        count++;
    }
    cout << count << endl;
}