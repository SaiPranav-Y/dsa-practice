#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int i, n, e, x, a, b, temp;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> e;
        v.push_back(e);
    }

    cin >> x;
    v.erase(v.begin() + x - 1);

    cin >> a >> b;
    v.erase(v.begin() + a - 1, v.begin() + b - 1);

    int final_size = v.size();
    cout << final_size << "\n";
    for (auto i = v.begin(); i < v.end(); ++i)
    {
        cout << *i << " ";
    }
    return 0;
}
