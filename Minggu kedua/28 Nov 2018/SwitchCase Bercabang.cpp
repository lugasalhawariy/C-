#include <iostream>

using namespace std;

int main()
{
    int a;

    cout<<"Masukan nilai: ";cin>>a;
    switch(a<10)
    {
    case true:
        cout<<"Satuan";
        break;
    case false:
        switch(a<=99)
        {
        case true:
            cout<<"Puluhan";
        }

}
}
