//3の倍数と3がつく数の合計値を出力するプログラム
#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
    //csv保存用
    ofstream file("/Users/m.kondo/Desktop/secret.csv");
    //1~numberまで探す
    int number = 200;
    long long sum = 0;
    //10進数の場合
    int base = 10;
    for (int i = 0; i <= number; i++)
    {
        int now_number = i;
        if (now_number % 3 == 0)
        {
            sum += now_number;
            cout << "3の倍数:" << now_number << endl;
            file << "3の倍数"
                 << "," << now_number << endl;
        }
        else
        {
            int now_number_div = now_number;
            while (now_number_div > 0)
            {
                //10で割った余りが3なら3がつく数とみなす
                if (now_number_div % base == 3)
                {
                    sum += now_number;
                    cout << "3がつく:" << now_number << endl;
                    file << "3がつく:"
                         << "," << now_number << endl;
                    break;
                }
                now_number_div /= base;
            }
        }
    }
    cout << sum << endl;
}