#include <iostream>
using namespace std;

int main()
{
 int numbers[5], sum = 0;
 cout << "Enter 5 Numbers : ";
//storing 5 number entered by user in array
//finding the sum of number entered
 for (int i = 0; i<5; ++i)
 {
  cin>>numbers[i];
  sum+=numbers[i];
 }
 cout<<" SUM = "<<sum<<endl;

 return 0;
}
