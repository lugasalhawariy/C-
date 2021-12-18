#include <iostream>
using namespace std;

main()
{
    int BA, BB;
    //Input banyak Array A
    cout << "Masukan banyak Array A : ";cin>>BA;

    int a[BA];
    for(int i=0; i<BA; i++){
        cout << "Masukan Array A["<<i<<"] : ";cin>>a[i];
    }
    //Input banyak Array B
    cout << "Masukan banyak Array B : ";cin>>BB;

    int b[BB];
    for(int i=0; i<BB; i++){
        cout << "Masukan Array A["<<i<<"] : ";cin>>a[i];
    }

    cout << "[ ";
    for(int i=0; i<BA; i++){
        for(int j=0; j<BB; j++){
            if(a[i] == b[j]){
                cout << a[i] << ", ";
            }
        }
        cout << a[i] << ", " << b[j] << ", ";
    }
    cout << " ]";
}
