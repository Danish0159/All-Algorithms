/*
Insertion Sort.
-> Insertion sort divides the list logically into
sorted and unsorted parts.
-> It picks a value from unsorted part and
place it into its correct position in the
sorted part.
-> It repeats the above process until the last
element.

Why Insertion Sort?
Adaptable Algorithm.
Stable Algorithm.

Complexity In Slides.


*/

#include<iostream>
using namespace std;

int numberOfSwapping = 0;


int insertionSort(int arr[], int n){
	for(int i = 0; i < n - 1; i++){
		int j = i + 1;  	// Take i+1th element for placing him at its right place.
		while(j > 0 && arr[j] < arr[j-1]){ //compare with sorted elements
			numberOfSwapping++;
			swap(arr[j], arr[j-1]);	
			j--;		
		}
	}
	cout<<"Number of Swapping: "<<numberOfSwapping<<endl;
}
	
	
int main() {
// int arr[] = { 8, 22, 7, 9, 31, 5, 13};

// int arr[] = { 9,8,7,6,5,4,3,2,1};

 int arr[] = { 8, 22, 7, 9, 31, 5, 13};

 int n = sizeof(arr)/sizeof(arr[0]);


 insertionSort(arr, n);
 cout<<"Sorted Array: "<<endl;
 for(int i = 0; i < n;i++){
 	cout<<arr[i] << " ";
 }
 cout<<endl;
 }

/*
Code Link
https://www.codingninjas.com/codestudio/problems/insertion-sort_3155179?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
*/
