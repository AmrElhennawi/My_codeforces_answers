#include <iostream>

using namespace std;
int main()
{
    int cont, first, second, third, sum = 0;
    cin >> cont;
    for (int i = 0; i < cont; i++)
    {
        cin >> first >> second >> third;
        if (first + second + third >= 2)
        {
            sum += 1;
        }
    }
    cout << sum;
}