#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int i, n, a;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << " ";
    return 0;
}
