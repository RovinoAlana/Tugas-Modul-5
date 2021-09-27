#include <iostream>
using namespace std;

int main()
{
	int instansi, jumlah1, jumlah2, kuota1, kuota2;
	cout << "Instansi : \n1.PAUD\n2.SD\n3.SMP\n4.SMA\n5.Pendidikan Tinggi"
	     << "\nPilih Instansi Pendidikan : "; cin >> instansi;
	cout << endl
	     << "Total Biaya"
	     << endl;
	     
    switch (instansi){	
	     case 1 :
	     kuota1 = 20;
	     cout << "Jumlah siswa : "; cin >> jumlah1;
	     cout << "Total biaya yang harus dikeluarkan : "
	          << 6000*kuota1*jumlah1;
	     break;
	     case 2 :
	     kuota1 = 35;
	     kuota2 = 42;
	     cout << "Jumlah siswa : "; cin >> jumlah1;
	     cout << "Jumlah pengajar : "; cin >> jumlah2;
	     cout << "Total biaya yang harus dikeluarkan : "
	          << (6000*kuota1*jumlah1)+(6000*kuota2*jumlah2);
	     break;
	     case 3 :
	     kuota1 = 35;
	     kuota2 = 42;
	     cout << "Jumlah siswa : "; cin >> jumlah1;
	     cout << "Jumlah pengajar : "; cin >> jumlah2;
	     cout << "Total biaya yang harus dikeluarkan : "
	          << (6000*kuota1*jumlah1)+(6000*kuota2*jumlah2);
	     break;
	     case 4 :
	     kuota1 = 35;
	     kuota2 = 42;
	     cout << "Jumlah siswa : "; cin >> jumlah1;
	     cout << "Jumlah pengajar : "; cin >> jumlah2;
	     cout << "Total biaya yang harus dikeluarkan : "
	          << (6000*kuota1*jumlah1)+(6000*kuota2*jumlah2);
	     break;
	     case 5 :
	     kuota1 = 50;
	     kuota2 = 50;
	     cout << "Jumlah Mahasiswa : "; cin >> jumlah1;
	     cout << "Jumlah pengajar : "; cin >> jumlah2;
	     cout << "Total biaya yang harus dikeluarkan : "
	          << (6000*kuota1*jumlah1)+(6000*kuota2*jumlah2);
	     break;
	     default :
	          cout << "Tidak teridentifikasi";
	     
		  }
	     
}
