#include <iostream>
using namespace std;

main()
{
    float number, sum = 0.0;

    do{
        cout<<"Enter a number: ";cin>>number;
        sum += number;
    }while(number != 0.0);

    cout<<"\nTotal sum = "<<sum;
}
