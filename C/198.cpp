#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;
int main()
{
    int R, R1, X, Y, ANS = 0;
    double distance;
    cin >> R >> X >> Y;
    R1 = R;
    distance = sqrt(pow(X, 2) + pow(Y, 2));
    if (R > distance)
    {
        cout << 2 << endl;
        return 0;
    }
    while (double(R) < distance)
    {
        ANS++;
        R += R1;
    }
    cout << ANS + 1 << endl;
}