/*
//Binary Search Is only applied to monotonic(Numbers have to be in increasing order or in decreasing order).

Binary search
Binary search is an efficient algorithm for
finding an item from a sorted list of items.

low:
The low holds the first index of the array.
high: 
The High holds the last index of the array.
formula:
mid = low + (high-low)/2

->Compare key with mid element. If key
found search successful.
->Otherwise two possibilities exist
 _The key is smaller then from mid element.
 _The key is greater then from mid element

->if the key is smaller then from mid element,
it would exist in the lower half of array.
 _Keep low at its position and move high to mid- 1 hence ignoring the upper half of the array.

->If the key is greater then from mid element,
it would exist in the upper half of array.
  _Keep high at its position and move low to
mid + 1 hence ignoring the lower half of the array


Repeat the above steps until low index
crosses the high index.


*/

#include<iostream>
using namespace std;



int binarySearch(int arr[], int n, int key){
	int low = 0;
	int high = n-1;
	int mid = 0;
	int counter = 0; //Counter to find the number of iterations.
	while(low <= high){ 
     counter++;		
  	 mid = low + (high-low)/2;
  	 
  	 if(key == arr[mid]){
  	 	cout<<"Iteration: Matched"<<endl;
		cout<<"Counter"<<counter<<endl;  
		   
  	 	cout<<"Searched Element: "<< arr[mid]<<endl;
  	 	return 0;
     }
  	 
  	 else if(key < arr[mid]){  	 	
  	 	cout<<"Iteration: Less Key"<<endl;
  	 	high = mid - 1;
	 }
	 
	 else if(key > arr[mid]){
 	 	cout<<"Iteration: Greater Key"<<endl;
  	 	low = mid + 1;
	 }
}

	return -1;//if element does not exist
}
	
	
int main() {
int arr[] = { 40,   90,   107,  120,    153,   173,  193   ,212,  279,   412,  487,   563,   754,  790  , 890 , 914,  952 };
int n = sizeof(arr)/sizeof(arr[0]);
 
 //int arr[5] = {4, 5, 6, 7, 8};
 //int n = 5;
	
 binarySearch(arr, n, 790);
}

