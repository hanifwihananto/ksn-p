	#include <bits/stdc++.h>
	using namespace std;
	
	int main(){
		// n : jumlah patok
		// k : jumlah bebek
		int n, k;
		cin >> n >> k;
		
		// jarak
		long int jarak[n+1];
		// titik start
		jarak[0] = 0;
		
		// jangkauan
		int jangkauan[k+1];
		
		// patok
		int a[n+1];
		
		// bebek
		int b[k+1];
		
		// looping
		int i, j;
		
		// patok
		for(i = 1; i <= n; i++){
			cin >> a[i];
			jarak[i] = jarak[i - 1] + a[i];
		}
		
		// bebek
		for(i = 1; i <= k; i++){
			cin >> b[i];
		}
		
		// menentukan bebek yang melewati patok 
		for(i = 1; i <= k; i++){
			j = 0;
			while(j <= n){
				if(b[i] >= jarak[j]){
					jangkauan[i] = j;
				}
				j++;
			}
		}
		
		// mencetak jangkauan yang dicapai oleh masing-masing bebek
		for(i = 1; i<= k;i++){
			cout << jangkauan[i] << endl;
		}
		
		return 0;
	}
