#include <iostream>

using namespace std;

struct titik{

int x, y;

};

titik mencoba(titik p1.x, titik p1.y, titik p2.x, titik p2.y){

    titik pt;

    pt.x = p1.x + p2.x;
    pt.y = p1.y + p2.y;

    return pt;

};

int main()
{
    titik P1, P2;

    P1.x = 5;
    P1.y = 4;
    P2.x = 2;
    P2.y = 1;

    cout << mencoba(P1.x, P1.y, P2.x, P2.y);
}
