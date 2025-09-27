#include <iostream>
using namespace std;

void boubleSort_ascendingOrder(int a[], int size){
	for (int i=0; i<size-1; i++){
		for(int j=0; j<size-i-1; j++){
			if(a[j]>a[j+1]){
				int temp= a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

void boubleSort_decendingOrder(int a[], int size){
	for (int i=0; i<size-1; i++){
		for(int j=0; j<size-i-1; j++){
			if(a[j]<a[j+1]){
				int temp= a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int  main(){
	int size;
	cout<<"Enter the size of an arry: ";
	cin>>size;
	
	int arr[size];
	cout<<"Enter your arry: "<<endl;
	for(int i=0; i<size;i++){
		cin>>arr[i];
		
	}
	cout<<endl;
	cout<<"the unsorted arry: "<<endl;
	for(int i=0; i<size;i++){
		cout<<arr[i]<<" ";
		
	}
	boubleSort_ascendingOrder(arr, size);
	
	cout<<endl<<endl;
	
	cout<<"the sorted arry in acending order: "<<endl;
	for(int i=0; i<size;i++){
		cout<<arr[i]<<" ";
		
	}
	
	boubleSort_decendingOrder(arr, size);
	
		cout<<endl<<endl;
	
	cout<<"the sorted arry in decending order: "<<endl;
	for(int i=0; i<size;i++){
		cout<<arr[i]<<" ";
		
	}
	
	
	return 0;
	
	
	
}
