#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int cont = 0;
    string word;
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        if (isupper(word[i]))
        {
            cont++;
        }
        else
            cont--;
    }
    if (cont > 0)
    {
        for (int j = 0; j < word.length(); j++)
        {
            word[j] = toupper(word[j]);
        }
    }
    else
    {
        for (int k = 0; k < word.length(); k++)
        {
            word[k] = tolower(word[k]);
        }
    }
    cout << word;
}