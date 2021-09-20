#include <iostream>
using namespace std;

int main(){
	int jumlah = 100;
	int apelMerah = 5; 
	int apelHijau = 10;
	
	int arrMerah[500];
	int arrHijau[500];
	int arr[1000];
	
	int i;
	for(i = 0; i < jumlah; i++){
		arr[i] = i * apelMerah;
//		arrHijau[i] = i * apelHijau;
	}
	
	int j;
	for(j = i; j < i + jumlah; j++){
		int x = 1;
		arr[j] = x * apelHijau;
		x++;
	}	
	
	
	// Mencari angka yang sama
	for(int k = 0; k < 2*jumlah; k++){
		for(int l = k + 1; l < 2*jumlah; l++){
			if(arr[k] == arr[l]){
				cout << arr[k] << " ";
			}
		}
	}
	
	
}

