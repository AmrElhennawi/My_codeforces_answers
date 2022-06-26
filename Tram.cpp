#include <iostream>

using namespace std;
int main()
{
    int cont, in, out, totalInside = 0, max = 0;
    cin >> cont;
    for (int i = 0; i < cont; i++)
    {
        cin >> out >> in;
        totalInside = (totalInside - out) + in;
        if (totalInside > max)
        {
            max = totalInside;
        }
    }
    cout << max;
}