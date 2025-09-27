#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int n, int val){
	
	int h=n-1;
	int l=0;
	
	int target = l +((val-arr[l])/(arr[h]-arr[l])) * (h-l);
	
    return target;
    
    if(val!=target){
    	return -1;
	}
}

int main(){
	int s;
	
	cout<<"Enter the size of an arry: ";
	cin>>s;
	
	int a[s];
	
	cout<<"Enter your arry that must be sorted and uniformly distributed: "<<endl;
	for(int i=0; i<s; i++){
		cin>>a[i];
		
	}
	
	int n;
	cout<<"Enter the number that you want to search: ";
	cin>>n;
	
	
	
	int result = interpolationSearch(a,s,n);
	if(result==-1){
		cout<<"element not found: linear search failed:";
	}
	
	cout<<"the index of the number that you wanted to search : "<<result+1;
	return 0;
	
}
