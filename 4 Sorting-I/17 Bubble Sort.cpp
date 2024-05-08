/*
Bubble Sort.
Compares the adjacent elements and swaps their positions if they are not in the
intended order (increasing or decreasing).
It repeats the above process until the last
element.

Use-Case.



*/

#include<iostream>
using namespace std;

int numberOfSwapping = 0;

int bubbleSort(int arr[], int n){
	// for round 0 to n-1 
	for(int i = 0; i < n-1; i++){   //(using n-1, because there is no number after the last to which it will be swapped(So last element is in its right place).
	// for single round(Swapping).
		for(int j = 0; j < n-i-1; j++){//j=0 (Because everytime start with element (at 0 index), (n-1) for elements, (n-i-1) because ignore the already sorted numbers.
			if(arr[j]>arr[j+1]){
				numberOfSwapping++;
				swap(arr[j],arr[j+1]);
			}
		}
	}
	cout<<"Number of Swapping: "<<numberOfSwapping<<endl;
}
	
	
int main() {
 int arr[] = {  8, 22, 7, 9, 31, 5, 13};
 int n = sizeof(arr)/sizeof(arr[0]);
	
 bubbleSort(arr, n);
 cout<<"Sorted Array: "<<endl;
 for(int i = 0; i < n;i++){
 	cout<<arr[i] << " ";
 }
 cout<<endl;
 }

/*
Optimization.
-> The bubble sort can be optimized by introduction a
flag variable to monitor whether elements are
getting swapped inside the inner loop or not?
-> If no swap occurred, it means the array is already
sorted and we can simply exit the algorithm.
-> By this optimization the best case time complexity
of bubble sort becomes ? ?? , because the outer
loop will executes itself only once (constant time).

void bubbleSort(int A[], int n)
{
bool flag = false; //to monitor the swap of elements 
for(int i = 0; i < n - 1; i++) //keep count of sorted elements
{
for(int j = 0; j < n - i - 1; j++) //repeat the sorting process
{
if(A[j] > A[j + 1]) //compare adjacent elements
{
swap(A[j], A[j + 1]); //swap the elements 
flag = true; //if swap occur
}
}
If(!flag) //if no swap occurred, array is already sorted
break; //exit the outer loop
}
}
*/


/*
https://www.codingninjas.com/codestudio/problems/bubble-sort_980524?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1
*/
