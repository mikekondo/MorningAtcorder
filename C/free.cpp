#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <opencv2/opencv.hpp>
using namespace std;
int main()
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
            count++;
            cout << "3の倍数:" << i << endl;
        }
        else
        {
            //10進数の場合
            int base = 10;
            int x = i;
            int origin_x = i;
            while (x > 0)
            {
                //10で割った余りが3なら3がつく数とみなす
                if (x % base == 3)
                {
                    sum += x;
                    cout << "3がつく:" << origin_x << endl;
                    count++;
                    break;
                }
                x /= base;
            }
        }
    }
    cout << sum << endl;
    cout << count << endl;
}