#include <iostream>
using namespace std;

int main(){
	// pola 1
	bool a = true, b = true, c = true, d = true, x, pola1;	
	
	// pola 2
//	bool a = true, b = true, c = true, d = false, x;
	
	// pola 3
//	bool a = true, b = true, c = false, d = false, x;
	
	// pola 4
//	bool a = true, b = false, c = false, d = false, x;
	
	// pola 5
//	bool a = false, b = false, c = false, d = false, x;
	
	
	// pola 6
//	bool a = false, b = true, c = true, d = true, x;
	
	// pola 7	
//	bool a = false, b = false, c = true, d = true, x;
	
	// pola 8
//	bool a = false, b = false, c = false, d = true, x;
	
	// pola 9
//	bool a = false, b = false, c = false, d = false, x;


	// pola 10

	x = (((a and not b) or c) and (c or not (d and a)) and (not b or c or not d)) or (a and not c and d);
	
	if(x == true){
		cout << "TRUE";
	} else {
		cout << "FALSE";
	}
	
//	cout << x;
}

