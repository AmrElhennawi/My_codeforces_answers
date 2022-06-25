#include <iostream>

using namespace std;
int main()
{
    long k, n, w, cost, borrow, sum = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        cost = i * k;
        sum += cost;
    }
    borrow = (sum - n) > 0 ? sum - n : 0;
    cout << borrow;
}