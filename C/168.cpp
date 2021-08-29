#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <math.h>
using namespace std;
int main(void)
{
    int A, B, H, M;
    double SHORT_X, SHORT_Y, LONG_X, LONG_Y, ANS;
    cin >> A >> B >> H >> M;
    LONG_X = (double)B * sin(M_PI / 180 * M * 6);
    LONG_Y = (double)B * cos(M_PI / 180 * M * 6);
    SHORT_X = (double)A * sin(M_PI / 180 * (H * 30 + 0.5 * M));
    SHORT_Y = (double)A * cos(M_PI / 180 * (H * 30 + 0.5 * M));
    ANS = sqrt(pow(SHORT_X - LONG_X, 2) + pow(SHORT_Y - LONG_Y, 2));
    printf("%.20f", ANS);
}