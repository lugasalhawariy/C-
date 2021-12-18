#include <iostream>

using namespace std;

main()
{
    int i=0;

    do{
        int j=0;
        do{
            cout<<"i = "<<i<<" and j = "<<j<<endl;
            j++;

        }while(j<5);
        i++;
    }while(i<3);
}
