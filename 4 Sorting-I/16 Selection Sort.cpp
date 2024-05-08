/*
for-lop guide-lines
if (-> 0 then <n)
if(-> 1 then <=)

Selection Sort.
Selects the (next) smallest element of list and swaps it into the right place.

different rounds/passes.

It repeats the above process until the last
element.


Use Case
If array size is small then use this one. Works good on small size arrys/vectors.


*/

#include<iostream>
using namespace std;

// Space Complexity O(1), We have used variables but not n variables so complexity is contsant.

// Time Complexity is O(n), 

int numberOfSwapping = 0;

int selectionSort(int arr[], int n){
	for(int i = 0; i<n-1; i++){   // (using n-1, because the last reamainning number will already be in its right place.
		int min = i;
		for(int j = i+1; j<n; j++){//repeat for all elements of sub array
			if(arr[min]>arr[j]){
				min = j;
			}
		}
		numberOfSwapping++;
		swap(arr[min], arr[i]);//swap minimum element to its place
	}
    cout<<"Number of Swapping: "<<numberOfSwapping<<endl;
}
	
	
int main() {
//int arr[17] =   {30, 54, 118, 163,227, 283, 325, 383, 394, 475, 566, 735, 807, 836, 863, 972, 995};
//int n = 17;
 
 int arr[6] = {5, 4, 6, 3, 2, 1};
 int n = sizeof(arr)/sizeof(arr[0]);
	
 selectionSort(arr, n);
 cout<<"Sorted Array: "<<endl;
 for(int i = 0; i < n;i++){
 	cout<<arr[i] << " ";
 }
 cout<<endl;
}


/*
https://www.codingninjas.com/codestudio/problems/selection-sort_981162?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
*/
