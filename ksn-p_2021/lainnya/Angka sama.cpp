#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int i,arr[100],j,n;
  
	cout<<"Enter Size of array: ";
	cin>>n;
  
	cout<<"Enter any "<< n <<" num in array: ";
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
  
	cout<<"Dublicate Values are: ";
  
	for(i=0; i<n; i++){
    	for(j=i+1; j<n; j++){
    		if(arr[i]==arr[j]){
    			cout<<"\n"<<arr[i];
    		}
		}
	}
  getch();
 }
