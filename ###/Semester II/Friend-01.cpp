 #include <iostream>
 #include <conio.h> 
 using namespace std;
 
 class Hitung 
 { 
     friend ostream& operator<<(ostream&, const Hitung&); 
     friend istream& operator>>(istream&, Hitung&); 
 public:    
     Hitung(); 
     void hitung_jumlahnya()
	 	{
			jumlah = (a + b + c);
			kali = (a * b * c);
			bagi = (a / b / c);
			kurang = (a - b - c);  
		} 
	
 private: 
     float a,b,c; 
     int jumlah,kali,kurang;
	 float bagi; 
 }; 
  Hitung::Hitung() 
	{ 
    	cout << "Program menghitung jumlah 3 integer\n"; 
    	cout << "Selamat berkarya\n"; 
  	} 
 istream& operator>>(istream& in, Hitung& masukan) { 
     cout << "Masukkan nilai a : "; 
     in >> masukan.a; 
     cout << "Masukkan nilai b : ";     
     in >> masukan.b; 
     cout << "Masukkan nilai c : ";     
     in >> masukan.c; 
     return in; 
 } 
      
 ostream& operator<<(ostream& out, const Hitung& keluaran) { 
     out << "Nilai a : " << keluaran.a << endl;     
     out << "Nilai b : " << keluaran.b << endl;         
     out << "Nilai c : " << keluaran.c << endl;         
     out << "Hasil Penjumlahan 3 integer di atas : " << keluaran.jumlah << endl;
	 out << "Hasil Pembagian 3 integer di atas   : " << keluaran.bagi << endl;
	 out << "Hasil Perkalian 3 integer di atas   : " << keluaran.kali << endl;
	 out << "Hasil Pengurangan 3 integer di atas : " << keluaran.kurang << endl;
     return out; 
 } 
  
 main() { 
      Hitung X; 
      cin >> X; 
      X.hitung_jumlahnya(); 
      cout << X; 
      getch(); 
      return 0; 
 } 
