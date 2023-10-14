#include <iostream>

using namespace std;

int a, b;

int main()
{
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    cout<<"Pobrano liczby a == "<<a<<" oraz "<<"b == "<<b<<endl;
    cout<<"Wiersz o dlugosci a:"<<endl;
    for(int i=0;i<a;i++){
        cout<<"*";
    }
    cout<<endl<<"Kolumna o dlugosci b:"<<endl;
    for(int i=0;i<b;i++){
        cout<<"*"<<endl;
    }
    cout<<"Prostokat gwiazdek o wymiarach 'a' na 'b' :"<<endl;
    for (int i = 0; i < a; i++)
    {
        for (int i = 0; i < b; i++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
