//Implement the Comb Sort algorithm to sort an array of integers.
// After sorting, perform a complexity analysis:
// count and display the
//total number of swaps and comparisons performed during the sorting process.

#include <iostream>
using namespace std;

void combsort(int arr[], int n ){
	
	int swap=0;
	int gap=n;
	float jump=1.3;
	int comparisions=0;
	
	while(gap>1){
		gap= int(gap/jump);
		
		if(gap<1) gap=1;
		
	  for(int i=0; i+gap<n; i++){
	  	comparisions++;
	  	if(arr[i]>arr[i+gap]){
	  		int temp=arr[i];
	  		arr[i]=arr[i+gap];
	  		arr[i+gap]=temp;
	  		swap++;
	  		
		  }
		  
	  }
	}
	cout<<"total swaps: "<<swap<<endl;
	cout<<"tatal comparresions: "<<comparisions<<endl;
	
}

int main(){
	int arr[]={55,67,11,768,332,998};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	combsort(arr, n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
