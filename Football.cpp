#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sum = 1;
    string position;
    cin >> position;
    for (int i = 0; i < position.length(); i++)
    {
        if (position[i] == position[i + 1])
        {
            sum++;
        }
        else
            sum = 1;
        if (sum == 7)
        {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
}