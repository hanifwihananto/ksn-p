#include <iostream>
#include <conio.h>
 
using namespace std;
 
int main(){
	int kemunculanData[10], jumlah, tmp;
	int kumpulanData[10] = {3,1,5,8,1,9,3,10,3,15};
 
	/* Mengurutkan data secara urutan naik (1,1,3,...) */

	cout <<"Kumpulan Data:"<<endl;
	for(int h=0; h<10; h++){
		for(int i=h+1; i<10; i++){
			if(kumpulanData[h] > kumpulanData[i]){
				tmp = kumpulanData[i];
				kumpulanData[i] = kumpulanData[h];
				kumpulanData[h] = tmp;
			}
		}
		
	cout << kumpulanData[h] << " ";
	}
 
	cout <<"\n============================================================================"<<endl;
	cout <<"Banyak kemunculan data : " << endl;
 
	/* Proses menghitung periode kemunculan */
	for(int h=0; h<10; h++){
		jumlah = 0;
		for(int i=0; i<10; i++){
			if(kumpulanData[h] == kumpulanData[i])
			jumlah++;
		}
 
	/* Menghindari program menampilkan angka yang sudah di tampilkan ke layar sebelumnya */
	if(kumpulanData[h] != kumpulanData[h-1])
	cout <<"Nilai :"<< kumpulanData[h] << " : Jumlahnya : " << jumlah <<endl;
	}
 
getch();
}
