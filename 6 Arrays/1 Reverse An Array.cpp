#include<iostream>
using namespace std;
/*
Swap the indexes(First with last) untill the start becomes greater to last.

Works for both odd and even number of size.

For odd, It will swap to itselt, and then the start will move forward, and end will move left(and then loop breaks down).
*/


void reverseArr(int arr[] , int size){

int start = 0;
int end = size-1; 
	
	while(start<=end){
		
		swap(arr[start], arr[end]);	
		
		start++;
		end--;
	}
	
	for(int i = 0; i<size;i++){
	cout<<arr[i]<<" ";
	}
}

int main() {

int arr[5] = { 1 , 2 , 3 , 4 , 5};


reverseArr(arr,5);

}
