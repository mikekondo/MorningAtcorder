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
    int n;
    cin >> n;
    vector<int> l(n);
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (l[i] != l[j] && l[j] != l[k] && l[k] != l[i] && i < j && j < k)
                {
                    vector<int> vec;
                    vec.push_back(l[i]);
                    vec.push_back(l[j]);
                    vec.push_back(l[k]);
                    sort(vec.begin(), vec.end());
                    if (vec[2] < vec[0] + vec[1])
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;
}