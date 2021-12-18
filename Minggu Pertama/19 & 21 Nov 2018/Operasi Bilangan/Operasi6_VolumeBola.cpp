#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    int r, R;
    float VB, PHI;
    PHI = 3.14;
    cout << "Masukan Nilai Jari-jari : ";
    cin >> r;
    cout << endl;
    R = r*r*r;
    VB = 4/(float)3*PHI*R;
    cout<<(float)VB;
    return 0;
}
