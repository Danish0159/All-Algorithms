/* 
Recursion: 
*/
#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int key) {
 // base case.
 if(start > end){
 	 return false;
 }
 int mid = start + (end - start) / 2;
 
 // Element found. 
 if(arr[mid] == key){
 	return true;
 }	
 else if(key < arr[mid]){
 	return binarySearch(arr, start, mid - 1, key);
 }	
 else {
 return binarySearch(arr,  mid + 1, end, key);
 }
}





bool linearSearch(int arr[], int size, int key) {
 // Size 0, That means no element left.
 if(size == 0){
 	return false;
 }	
 if(arr[0] == key){
 	return true;
 }	
 else {
 	return linearSearch(arr+1,size-1,key);
 }
}


int getSum(int arr[], int size){
	if(size==0){
		return 0;
	}
	
	if(size ==1){
		return arr[0];
	}
	
	int sum = arr[0] + getSum(arr+1, size-1);
	return sum;
}


bool isSorted(int arr[], int size){
	// no element or 1 element array is already sorted.	
	if(size==0 || size==1){
		return true;
	}
	
	if(arr[0]>arr[1]) {
		return false;
    }	
    else{
      bool remainingPart = isSorted(arr + 1, size - 1);
	  return remainingPart;
	}
} 


int main() {
// Array Given, Question IsSorted?
int arr[6] = {2,4,6,10,14,16};
int size = 6;
int key = 18;

bool ans = isSorted(arr, size);

if(ans){
cout<<"Array is sorted: "<<endl;	
}
else{
cout<<"Array is NOT sorted: "<<endl;		
 }
 
 int sum = getSum(arr, size);
 cout<<endl;cout<<sum<<endl;
 
 bool ans2 = linearSearch(arr, size, key);
 
 if(ans2){
 	cout<<"Liner: Key Is present: "<<endl;
 }
 else{
 	cout<<"Liner: Key Is Not present: "<<endl;
 }
 

 bool ans3 = binarySearch(arr, 0, 6, key);
 
 if(ans3){
 	cout<<"Binary: Key Is present: "<<endl;
 }
 else{
 	cout<<"Binary: Key Is Not present: "<<endl;
 }
 
 
}
/*
https://www.codingninjas.com/codestudio/problems/binary-search_972?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_11

int solve(int arr[], int start, int end, int key) {
 // base case.
 if(start > end){
      return -1;
 }
 int mid = start + (end - start) / 2;
 
 // Element found. 
 if(arr[mid] == key){
     return mid;
 }    
 else if(key < arr[mid]){
     return solve(arr, start, mid - 1, key);
 }    
 else {
 return solve(arr,  mid + 1, end, key);
 }
}


int binarySearch(int *input, int n, int val)
{
    //Write your code here
   int ans = solve(input, 0, n-1, val);
 
}

*/
