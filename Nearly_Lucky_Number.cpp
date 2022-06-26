#include <iostream>
#include <string>

using namespace std;
int main()
{
    int cont = 0;
    string num, ans;
    bool bol;
    cin >> num;
    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '4' || num[i] == '7')
        {
            cont++;
        }
    }
    ans = (cont == 4 || cont == 7) ? "YES" : "NO";
    cout << ans;
}