#include <iostream>
#include <string>

using namespace std;
int main()
{
    string word;
    int cont;
    cin>>cont;
    for (int i = 0; i < cont; i++)
    {
        cin >> word;
        if (word.length() > 10)
        {
            cout << word[0]<<word.length()-2<<word[word.length() - 1]<<'\n';
        }
        else
            cout << word<<'\n';
    }
}