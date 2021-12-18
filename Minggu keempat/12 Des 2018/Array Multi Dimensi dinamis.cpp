#include <iostream>
using namespace std;

const int CITY=2;
const int WEEK=7;

int main()
{
 int temperature [CITY][WEEK];
    cout<< "Enter all temperature for a week of first city and then second city. \n";

    for (int i=0; i < CITY; ++i)
    {
        for (int j = 0; j<WEEK; ++j)
        {
            cout<<"City "<<i+1<<", Day"<<j+1<<" : ";
            cin>>temperature[i][j];
        }
    }
    cout<<"\n \n Displaying Values : \n";
 //accessing the values from the temperature array

    for(int i = 0; i<CITY; ++i)
    {
        for(int j = 0; j<WEEK; ++j)
        {
            cout<<"City"<<i+1<<", Day"<<j+1<<" = "<<temperature[i][j]<<endl;
        }
    }
  return 0;
}
