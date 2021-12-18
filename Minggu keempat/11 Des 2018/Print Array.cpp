#include <iostream>
using namespace std;

void printarray (int arg[], int length) {
 for (int n=0 ; n<length; ++n)
 cout<<arg[n]<<' ';
 cout<< '\n';
}

int main()
{
 int array1[]={5, 10, 15};
 int array2[]={2, 4, 6, 8, 10};
 printarray (array1, 3);
 printarray (array2,5);

}
