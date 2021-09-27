//3の倍数と3がつく数の合計値を出力するプログラム
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <bitset>
using namespace std;
int main(void)
{
    int n = 200;
    int number = 0;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        number = i;
        if (number % 3 == 0)
        {
            sum += number;
        }
        else
        {
            int number_div = number;
            while (number_div > 0)
            {
                if (number_div % 10 == 3)
                {
                    sum += number;
                    break;
                }
                number_div /= 10;
            }
        }
    }
    cout << sum << endl;
}