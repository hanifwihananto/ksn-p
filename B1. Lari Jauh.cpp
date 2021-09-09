#include <bits/stdc++.h>
using namespace std;

int main(){
	// n : jumlah patok
	// k : jumlah bebek
	int n, k;
	cin >> n >> k;
	
	// jarak
	int jarak[n+1];
	// titik start
	int jarak[0] = 0;
	
	// jangkauan
	

	
	// patok
	int a[n+1];
	
	// bebek
	int b[k+1];
	
	// looping for
	int i;
	
	// patok
	for(i = 1; i <= n; i++){
		cin >> a[i];
		jarak[i] = jarak[i - 1] + a[i];
	}
	
	// bebek
	for(i = 1; i <= k; i++){
		cin >> b[i];
	}
	
	return 0;
}

