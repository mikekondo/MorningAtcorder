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
    int n;
    cin >> n;
    vector<double> x(n);
    vector<double> y(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double tilt = double((y[j] - y[i]) / (x[j] - x[i]));
            if (tilt >= -1 && tilt <= 1)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
