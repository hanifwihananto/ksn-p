#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	// N : baris kursi 
	// M : jumlah kursi
	int N, M;
	
	// i : jumlah baris
	// j : jumlah kursi
	int i, j;
	cin >> i >> j;
	
	int A = 1, B = 2;
	double result;
	
	result = (B + j) / (A + i);
	
	cout << result;
	
	return 0;
//	printf("2f%d", &result);
}

