#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <bitset>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string pres = s.substr(0, n), nexts = s.substr(n, n);
    int q;
    cin >> q;
    vector<int> t(q);
    vector<int> a(q);
    vector<int> b(q);
    for (int i = 0; i < q; i++)
    {
        cin >> t[i] >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        if (t[i] == 1)
        {
            if (a[i] < n)
            {
                if (b[i] < n)
                    swap(pres[a[i]], pres[b[i]]);
                else
                    swap(pres[a[i]], nexts[b[i] - n]);
            }
            else
            {
                if (b[i] < n)
                    swap(nexts[a[i] - n], pres[b[i]]);
                else
                    swap(nexts[a[i] - n], nexts[b[i] - n]);
            }
        }
        else
            swap(pres, nexts);
    }
    cout << pres << nexts << endl;
}