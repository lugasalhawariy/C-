#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float phi=3.14;
    float vb;
    int r;

    cout<<"Masukkan jari-jari : ";cin>>r;

    vb = 4/3.0 * phi * pow(r, 3);
    cout<<endl<<endl<<vb;
    return 0;
}
