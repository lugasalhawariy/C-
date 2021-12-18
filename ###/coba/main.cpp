#include <iostream>
using namespace std;
class Rekursi {
public:
Rekursi() {
 n = 5;
}
int faktorial(int n) {
int hasil=1;
for (int i=1; i<=n; i++)
 hasil = hasil*i;
return hasil;
}
int Rfaktorial(int n) {
if (n<=1) return 1;
else return n*Rfaktorial(n-1);
}
void output() {
 hasil = Rfaktorial(6);
 cout << "Faktorial iteratifif " << faktorial(6);
 cout << "\nFaktorial rekursif " << Rfaktorial(5);
}
private:
int n;
long hasil;
};
int main() {
 Rekursi x;
 x.output();
 std::cout << "\nHello World!\n";
}
