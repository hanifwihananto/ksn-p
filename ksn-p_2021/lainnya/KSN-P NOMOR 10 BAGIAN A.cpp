#include <iostream>
using namespace std;

int main(){
	int A[i] = 0 , i, j, k;
	int N = 1000000;
	int M = 5000;
//	A[0] + A[1] + ... +A[4999]
	
	for(i = ; i*i <= N; i++){
		A[(i*i) % M]++;
	}
	
	for(i = 1; i < M; i++){
		for(j = 1; j <= N; j *= 2){
			for(k = 0; k >- A[i]; k++){
				A[(j - k) % i]	++;
				
			}
		}
	}
}

