/*
Quick Sort
_Quick sort is a divide and conquer algorithm.
_Pick an element, called a pivot, from the list.
_with values less than the pivot come before the pivot. with values greater than the pivot come after it.
_Recursively apply the above steps to the sub-list of elements with smaller values and separately
to the sub-list of elements with greater values

Algo
i_ Partitioning (All elements on start are less and on end are greater to Pivot).
ii_ Sort using Recursion.
/* Partition the list into two halves based on pivot and return partition index */


/*
Is quickSort In-Place?
Is is stable?
*/

#include<iostream>
using namespace std;



int partition(int arr[], int start, int end) {

    //Step1(Choosing first element as pivot
	int pivot = arr[start];	
	
	int count = 0;
	//Step2(count all elements less then pivot)
	for(int i = start+1; i<=end; i++){ //i=(start+1) first is pivot himself.
		if(arr[i] <= pivot){
		count++;	
		}
	}

	int pivotIndex = start + count;
	// put pivot value at pivotIndex.
	swap(arr[pivotIndex], arr[start]); 
	
	//Step3 (Make Condition->  [all elements <p, p , >p all elemetns])
	int i = start, j = end;
	
	while(i < pivotIndex && j > pivotIndex){
		
		//Move i forward if elements on left are already less then pivot.
		while(arr[i] <= pivot){
		   i++;	
		}
	    //Move j backward if elements on right are already greater then pivot.
		while(arr[j] > pivot){
		   j--;	
		}
		//Swap case.		
		if(i < pivotIndex && j > pivotIndex){
			swap(arr[i], arr[j]);
			i++;
			j--;
		}	
	}

	return pivotIndex;	
}


void quickSort(int arr[], int start, int end){
 // best case (single o r zero elements in array). 
 if(start >= end){
 	return;
 }

//pi is pivotIndex Index
  int pi = partition(arr, start, end);

// Recursive Calls.
  quickSort(arr, start, pi - 1);  //sort(for left array having smaller values from pivot)
  quickSort(arr, pi + 1, end);	//sort(for right array having greater values from pivot)
}


int main(){	
//    int arr[10] = {2,4,1,6,9 ,9,9,9,9,9};
 //   int n = 10;
    
	int arr[5] = {2, 4, 1, 6, 9 };
	int n = 5;


	cout << "List:\t\t";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << endl;

	quickSort(arr, 0, n-1);

	cout << "Sorted List:\t";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}

	cout << endl << endl;
	
	return 0;

}



/*
https://www.codingninjas.com/codestudio/problems/quick-sort_983625?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_15


#include <bits/stdc++.h> 


int partition(vector<int> &arr, int start, int end) {

    //Step1(Choosing first element as pivot
    int pivot = arr[start];    
    
    int count = 0;
    //Step2(count all elements less then pivot)
    for(int i = start+1; i<=end; i++){ //i=(start+1) first is pivot himself.
        if(arr[i] <= pivot){
        count++;    
        }
    }

    int pivotIndex = start + count;
    // put pivot value at pivotIndex.
    swap(arr[pivotIndex], arr[start]); 
    
    //Step3 (Make Condition->  [all elements <p, p , >p all elemetns])
    int i = start, j = end;
    
    while(i < pivotIndex && j > pivotIndex){
        
        //Move i forward if elements on left are already less then pivot.
        while(arr[i] <= pivot){
           i++;    
        }
        //Move j backward if elements on right are already greater then pivot.
        while(arr[j] > pivot){
           j--;    
        }
        //Swap case.        
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }    
    }

    return pivotIndex;    
}


void solve(vector<int> &arr, int start, int end){
 // best case (single o r zero elements in array). 
 if(start >= end){
     return;
 }
  
// if (start < end){

//pi is pivotIndex Index
  int pi = partition(arr, start, end);

// Recursive Calls.
  solve(arr, start, pi - 1);  //sort(for left array having smaller values from pivot)
  solve(arr, pi + 1, end);    //sort(for right array having greater values from pivot)
//} 

}



vector<int> quickSort(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    
    solve(arr, start, end);
    return arr;
}


*/
