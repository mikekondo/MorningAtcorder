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
    long long twoN = pow(2, n);
    vector<int> vec(twoN);
    vector<int> tournamentA;
    vector<int> tournamentB;
    map<int, int> mp;
    for (int i = 0; i < twoN; i++)
    {
        cin >> vec[i];
        mp[vec[i]] = i + 1;
    }
    long long niBun = twoN / 2;
    for (int i = 0; i < niBun; i++)
    {
        tournamentA.push_back(vec[i]);
    }
    for (int i = niBun; i < twoN; i++)
    {
        tournamentB.push_back(vec[i]);
    }
    int maxA = *max_element(tournamentA.begin(), tournamentA.end());
    int maxB = *max_element(tournamentB.begin(), tournamentB.end());
    int ans = min(maxA, maxB);
    cout << mp[ans] << endl;
}