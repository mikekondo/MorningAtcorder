#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int q;
    scanf("%d", &q);
    string a;
    for (int i = 0; i < q; i++)
    {
        int q;
        scanf("%d", &q);
        if (q == 1)
        {
            int x;
            scanf("%d", &x);
            a += x;
        }
        if (q == 2)
        {
            printf("%d\n", a[0]);
            a.erase(a.begin());
        }
        if (q == 3)
        {
            sort(a.begin(), a.end());
        }
    }
}