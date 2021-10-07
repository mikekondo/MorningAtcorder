#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <fstream>
#include <numeric>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
    int h, w;
    cin >> h >> w;
    vector<int> vec;
    long long count = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
        }
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < h * w; i++)
    {
        count += vec[i] - vec[0];
    }
    cout << count << endl;
}
