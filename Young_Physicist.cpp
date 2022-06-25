#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, x, y, z, sumX = 0, sumY = 0, sumZ = 0;
    string ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }
    ans = (sumX == 0 && sumY == 0 && sumZ == 0) ? "YES" : "NO";
    cout << ans;
}