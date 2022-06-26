#include <iostream>
using namespace std; 

int main()
{
    int cont=0,x;
    cin>>x;
    while (x>0)
    {
        cont++;
        x-=5;
    }
    cout<<cont;  
}