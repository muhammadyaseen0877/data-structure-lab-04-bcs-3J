#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
	for (int i=1; i<size; i++){
		int curr= arr[i];
		int prev=i-1;
		
		while(prev>=0 && arr[prev]>curr){
			arr[prev+1]=arr[prev];
			prev--;
		}
		arr[prev+1]=curr;
		
	}
}

int binarysearch(int arr[], int size, int search){
	int st=0;
	int end=size-1;
	
	while(st<=end){
		int mid= (st+end)/2;
	
	if(search>arr[mid]){
		st=mid+1;
	}
	else if(search<arr[mid]){
		end=mid-1;
	}
	else {
		
		return mid;
	}
	
	
	}
	return -1;
}

int main(){
	int s;
	
	cout<<"Enter the size of an arry: ";
	cin>>s;
	
	int a[s];
	
	cout<<"Enter your arry: "<<endl;
	for(int i=0; i<s; i++){
		cin>>a[i];
		
	}
	
	int n;
	cout<<"Enter the number that you want to search: ";
	cin>>n;
	
	insertionSort(a, s);
	
	cout<<"the sorted arry : "<<endl;
	for(int i=0; i<s;i++){
		cout<<a[i]<<" ";
		
	}
	cout<<endl;
	
	int result = binarysearch(a, s, n);
	if(result==-1){
		cout<<"element not found: binary search failed:";
	}
	else{
		cout<<"the index of the number that you wanted to search : "<<result+1;
		
	}
	
	
	return 0;
	
}
