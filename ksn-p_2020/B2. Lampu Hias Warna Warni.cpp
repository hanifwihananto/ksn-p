#include <bits/stdc++.h>
using namespace std;

int main(){
	int jumlah;
	cin >> jumlah;
	string soal;
	cin >> soal;
	
	string huruf = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int jumlahHuruf[26];
	memset(jumlahHuruf, 0, sizeof jumlahHuruf); // set isi array menjadi 0
	
	// Mencari jumlah huruf
	int i;
	int j;
	for(i = 0; i < jumlah; i++){
		for(j = 0; j < 26; j++){
			if(soal[i] == huruf[j]){
				jumlahHuruf[j]++;
			}
		}
	}
	
	// mengecek jumlah huruf 
	/* for(j = 0; j < 26; j++){
		cout << "jumlah huruf" << huruf[j] << " = " << jumlahHuruf << endl;
	} */
	
	sort(jumlahHuruf, jumlahHuruf + 26, greater<int>()); // Mengurutkan descending (...3,2,1,0)
	
	int jumlahLampu1 = jumlahHuruf[0];
	int jumlahLampu2 = jumlahHuruf[1];
	int jumlahLampu3 = jumlahHuruf[2];
	
	// Mencari berapa lampu yang dapat digunakan
	int jumlahLampu;
	if(jumlahLampu3 < 1){
		jumlahLampu = -1;
	} else {
		jumlahLampu = 3 * jumlahLampu3;
		
		if(jumlahLampu1 > jumlahLampu3){
			jumlahLampu++;
		}
		if(jumlahLampu2 > jumlahLampu3){
			jumlahLampu++;
		}
	}
	
	cout << jumlahLampu << endl;
	
	
}

