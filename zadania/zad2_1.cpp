#include <iostream>

using namespace std;

int n, suma;

int main()
{
    cout<<"Podaj n: ";
    cin>>n;
    for (int i=0; i<=n; i++)
    {
        suma=suma+i;
    }
    cout<<suma<<endl;
    
    return 0;
}
