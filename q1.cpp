#include <iostream>
using namespace std;

int Lsearch(int arr[], int size, int search){
	
	for(int i=0; i<size; i++){
		if(arr[i]==search){
			return i;
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
	cout<<"Enter the number that you wan tto search: ";
	cin>>n;
	
	int result = Lsearch( a,s,n);
	if(result==-1){
		cout<<"element not found: linear search failed:";
	}
	
	cout<<"the index of the number that you wanted to search : "<<result+1;
	return 0;
	
}
