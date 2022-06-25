#include <iostream>

using namespace std;
int main()
{
    int m, n, a;
    long long cols = 0, rows = 0;
    cin >> m >> n >> a;
    while (m > 0)
    {
        cols++;
        m -= a;
    }
    while (n > 0)
    {
        rows++;
        n -= a;
    }
    cout << cols * rows;
}