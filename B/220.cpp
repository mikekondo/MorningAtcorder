#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <fstream>
using namespace std;
int main()
{
    int k, a, b;
    cin >> k >> a >> b;
    int ary_a = a;
    int ary_b = b;
    int ans_a = 0;
    int ans_b = 0;
    int base_a = 1;
    int base_b = 1;
    while (ary_a > 0)
    {
        ans_a = ans_a + (ary_a % 10) * base_a;
        ary_a /= 10;
        base_a *= k;
    }
    while (ary_b > 0)
    {
        ans_b = ans_b + (ary_b % 10) * base_b;
        ary_b /= 10;
        base_b *= k;
    }
    long long ans = ans_a * ans_b;
    cout << ans << endl;
}