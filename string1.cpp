#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int a_len = a.size();
    int b_len = b.size();
    cout << a_len << " " << b_len << endl;
    string c = a + b;
    cout << c << endl;
    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b << endl;
    return 0;
}