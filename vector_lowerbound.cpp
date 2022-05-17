// This program exceeds the given time limit in Hackerrank.
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n, i, e, q, ele, g;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> e;
        v.push_back(e);
    }
    cin >> q;
    while (q--)
    {
        cin >> ele;
        auto k = find(v.begin(), v.end(), ele);
        int index = k - v.begin();
        if (k != v.end())
        {
            cout << "Yes " << index + 1 << endl;
        }
        else
        {

            vector<int>::iterator low = lower_bound(v.begin(), v.end(), ele);
            if (v[low - v.begin()] != ele)
                cout << "No " << (low - v.begin() + 1) << endl;
        }
    }
    return 0;
}
