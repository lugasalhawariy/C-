#include <iostream>
using namespace std;

main()
{
    int a[] = {2,3,4};
    int b[] = {2,4,5,6,9};

    for(int i=0; i<3;)
    {
        for(int j=0; j<5; j++)
        {
            if(a[i] % b[j] == 0 || b[j] % a[i] == 0)
            {
                cout<<"["<<a[i]<<","<<b[j]<<"]"<<endl;
            }
        }
        i++;
    }
}
