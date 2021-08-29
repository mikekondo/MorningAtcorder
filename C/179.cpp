#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main(void)
{
    int N;
    int A, B;
    int C = 1;
    int CONT = 0;
    cin >> N;
    for (int A = 1; A < N; A++)
    {
        CONT += (int)(N - 1) / A;
    }
    cout << CONT << endl;
    return 0;
}