#include <iostream>
using namespace std;

class motor
{
private:
    int kecepatan;
    int berat;

public:
    motor()
    {
        cout << "Motor berjalan";
    }
    void setkecepatan(int kecepatan)
    {
        strcpy(this->kecepatan, kecepatan);
    }

    int *getkecepatan()
    {
        return kecepatan();
    }
};

main()
{
    motor();
    kecepatan(40);
}
