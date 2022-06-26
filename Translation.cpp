#include <iostream>
#include <string>

using namespace std;
int main()
{
    string word1, word2, ans;
    cin >> word1 >> word2;
    int cont = word2.length()-1;
    for (int i = 0; i < word1.length(); i++)
    {
        if (word1[i] == word2[cont])
        {
            ans = "YES";
        }
        else
        {
            ans = "NO";
            break;
        }
        cont--;
    }
    cout << ans;
}