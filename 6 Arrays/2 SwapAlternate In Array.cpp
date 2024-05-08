// Problem 
/*
Swap Alternate In Array
*/

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
	for(int i = 0; i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void swapAlternate(int arr[], int size){

// Size-1 (Because In odd number of length we don't want to swap).
// If we go for size , the inner statement can't find the i+1 index.
	for(int i = 0; i<size-1;i=i+2){
     	swap(arr[i], arr[i+1]);
	}

 printArray(arr,size);
}


int main(){	
	int array[5] = {1,2,3,4,5};
	int array2[6] = {1,2,3,4,5,6};
	
	swapAlternate(array,5);
	swapAlternate(array2,6);
}
