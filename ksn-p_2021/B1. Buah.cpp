#include <iostream>
using namespace std;

int main(){
	int jumlah;
	int apelMerah; 
	int apelHijau;
	
	cin >> jumlah >> apelMerah >> apelHijau;
	
	int arr[1000];
	int arrBerat[1000];
	
	// Mencari berat apel merah
	int i;
	for(i = 0; i < jumlah; i++){
		arr[i] = i * apelMerah;
	}
	
	// Mencari berat apel hijau
	int j;
	int x = 1;
	for(j = i; j < i + jumlah; j++){
		arr[j] = x * apelHijau;
		x++;
	}	
	
	// Mencari berat yang sama
	int b = 0;
	for(int k = 0; k < j; k++){
		for(int l = k + 1; l < j; l++){
			if(arr[k] == arr[l]){
				arrBerat[b] = arr[k];
				b++;
			}
		}
	}
	
	// Mencari berat sama max
	int max	= arrBerat[0];
	for(int m = 0; m < b; m++){
		if(arrBerat[m] > max){
			max = arrBerat[m] ;
		}
	}
	
	int beratMerah = max / apelMerah;
	int beratHijau = max / apelHijau;
	cout << (jumlah - beratMerah) + (jumlah - beratHijau);
}

