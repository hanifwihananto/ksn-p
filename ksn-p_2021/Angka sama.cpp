#include<iostream.h>
#include<conio.h>

void main(){
	int i,arr[100],j,n;
	clrscr();
  
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
