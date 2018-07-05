#include <iostream>

using namespace std;

int main()
{int a,i,n;
    cout << "Introducveti numarul initial:";
    cin>>a;
    cout<<"Introduceti numarul de zerouri:";
    cin>>n;
    i=1;
    while(i<=n)
    {
        a=a*10;
        i=i+1;
    }
    cout<<endl<<"Rezulatul este:"<<a<<endl;
    return 0;
}
