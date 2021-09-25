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
    ofstream file("/Users/m.kondo/Desktop/free.csv");
    long long sum = 0;
    int count = 0;
    for (int i = 0; i < 200; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
            count++;
            cout << "3の倍数:" << i << endl;
            file << "3の倍数:" << i << endl;
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
                    sum += origin_x;
                    cout << "3がつく:" << origin_x << endl;
                    file << "3がつく:" << origin_x << endl;
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