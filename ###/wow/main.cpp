#include <iostream>
#define max 5
using namespace std;

class arrayD {
  friend ostream& operator<<(ostream&, const arrayD&);
  friend istream& operator>>(istream&, arrayD&);

  private:
    int A[max];
};

int main()
{
  arrayD satu;

  cin >> satu;
  cout << satu;
}

ostream& operator << (ostream& output, const arrayD& x){
  for(int i=0; i<max; i++){
    output << x.A[i] << endl;
  }
  return output;
}
istream& operator >> (istream& input, arrayD& x){
  for(int i=0; i<max; i++){
    cout << "Masukan: ";
    input >> x.A[i];
  }
  return input;
}
