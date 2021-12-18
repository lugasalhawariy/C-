#include <iostream>
using namespace std;

main()
{
    int A = 4;
    int B = 5;
    int C = 3;
    int D = 5;

    int waktu = 0;
    int n = 200;

    cout << "Tersedia piring : ";
    cout << A << " A, " << B << " B, " << C << " C, " << D << " D"<<endl;
    cout << endl;
    for(int i=0; i<=n;)
    {
        if(i % 10 == 0 && A > 0 && D > 0)
        {
            A -= 1;
            D -= 1;
            cout << "Lisa makan, sisa: " << A << " A, " << B << " B, " << C << " C, " << D << " D" << endl;
        }
        if(i % 10 == 0 && B > 0 && C > 0)
        {
            B -= 1;
            C -= 1;
            cout << "Jiso makan, sisa: " << A << " A, " << B << " B, " << C << " C, " << D << " D" << endl;
        }
        if(i % 15 == 0 && B > 0 && D > 0)
        {
            B -= 1;
            D -= 1;
            cout << "Rose makan, sisa: " << A << " A, " << B << " B, " << C << " C, " << D << " D" << endl;
        }
        if(i % 20 == 0 && A > 0)
        {
             A -= 1;
            cout << "Jenny makan, sisa: " << A << " A, " << B << " B, " << C << " C, " << D << " D" << endl;
        }
        if(A > 0 || B > 0 || C > 0 || D > 0)
        {

            waktu += 5;
        }
        i = i+5;
    }
    cout << endl<<endl;
    cout << "Waktu yang dihabiskan untuk menghabiskan semua makanan adalah ";
    cout << waktu ;
}
