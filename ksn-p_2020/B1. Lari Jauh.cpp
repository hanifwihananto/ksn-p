	#include <bits/stdc++.h>
	using namespace std;
	
	int main(){
		// n : jumlah patok
		// k : jumlah bebek
		int jumlahPatok, jumlahBebek;
		cin >> jumlahPatok >> jumlahBebek;
		
		// jarak
		long int jarak[jumlahPatok+1];
		// titik start
		jarak[0] = 0;
		
		// jangkauan
		int jangkauan[jumlahBebek+1];
		
		// patok
		int patok[jumlahPatok+1];
		
		// bebek
		int bebek[jumlahBebek+1];
		
		// patok
		int i, j;
		for(i = 1; i <= jumlahPatok; i++){
			cin >> patok[i];
			jarak[i] = jarak[i - 1] + patok[i];
		}
		
		// bebek
		for(i = 1; i <= jumlahBebek; i++){
			cin >> bebek[i];
		}
		
		// menentukan bebek yang melewati patok 
		for(i = 1; i <= jumlahPatok; i++){
			j = 0;
			while(j <= jumlahBebek){
				if(bebek[i] >= jarak[j]){
					jangkauan[i] = j;
				}
				j++;
			}
		}
		
		// mencetak jangkauan yang dicapai oleh masing-masing bebek
		for(i = 1; i<= jumlahBebek;i++){
			cout << jangkauan[i] << endl;
		}
		
		return 0;
	}
