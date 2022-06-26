#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n, t;
    string queue;
    cin >> n >> t >> queue;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (queue[j] == 'B' && queue[j + 1] == 'G')
            {
                swap(queue[j], queue[j + 1]);
                j++;
            }
        }
    }
    cout << queue;
}