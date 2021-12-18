#include <stdio.h>
#include <stdlib.h>


using namespace std;

class hitung
{
	public:
		void penjumlahan();
		void input();
	private:
		float n;
		float jumlah;
		int pilihan;
};

void hitung::input()
{
	int a = n;
	cin >> n;
	cout << endl;
}

void hitung::penjumlahan()
{
	int pilihan;
	cout << "Masukan pilihan \n1. Penjumlahan\n2. Pengurangan\n3. Perkalian"<<endl;
	cout << "Pilihan : ";
	cin >> pilihan;
	
	if(pilihan == 1)
	{
		void input();
		for(int i=1;i<=n;i++)
    	{
        	jumlah=jumlah+i;
        	cout << jumlah;    
    	}
	}
	else if(pilihan == 2)
	{
		void input();
		for(int i=1;i<=n;i++)
    	{
        	jumlah=jumlah+i;
        	cout << jumlah;        
    	}
	}
	
}

main()
{
	hitung deret;
	
	deret.penjumlahan();
}
