#include <iostream>
using namespace std;

int main()
{
	string A, B, C, D;
	cout << "Pengkategorian Zona Covid-19"
	     << "\n(Jawaban ya/tidak)" << endl
	     << "\nApakah terdapat kasus positif Covid pada minggu pertama?" <<endl <<"-"; cin >> A;
	cout << "Apakah terdapat kasus positif Covid pada minggu kedua?" <<endl <<"-"; cin >> B;
	cout << "Apakah diiringi kasus kematian akibat Covid?" <<endl <<"-"; cin >> C;
	cout << "Apakah terdapat ODP(Orang Dalam Pengawasan)?" <<endl <<"-"; cin >> D;
	
    if (A == "ya" && B == "ya" && C == "ya" && D == "ya")
	cout << "\nDaerah tersebut termasuk dalam zona hitam";
	
	else if (A == "ya" && B == "ya" && C == "tidak" && D == "ya")
	cout << "\nDaerah tersebut termasuk dalam zona merah";
		
	else if (A == "tidak" && B == "tidak" && C == "tidak" && D == "ya")
	cout << "\nDaerah tersebut termasuk dalam zona oranye";
	
	else if (A == "tidak" && B == "tidak" && C == "tidak" && D == "tidak")
	cout << "\nDaerah tersebut termasuk dalam zona hijau";
	
	else 
	cout << "\nDaerah tidak teridentifikasi";
}
