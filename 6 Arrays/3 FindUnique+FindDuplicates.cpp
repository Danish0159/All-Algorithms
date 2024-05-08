/*
Description
https://www.codingninjas.com/codestudio/problems/find-unique_625159
*/

// XOR cuts the two same elements(it take it as +2 , -2) and returns the unique element.

#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
   int ans = 0;
    
    for(int i = 0; i<size; i++){
    	cout<<"Before: "<<ans<<endl;
        ans = ans^arr[i];
       	cout<<"After: "<<ans<<endl;
    }
    return ans;
}

int arr[9] = {8, 7, 2, 5, 4, 7, 1, 3, 6};

int findDuplicate(int *arr, int size)
{
   int ans = 0;
    
   // Xoring all array elements.
    for(int i = 0; i<size; i++){
    	cout<<"BeforeX: "<<ans<<endl;
        ans = ans^arr[i];
       	cout<<"AfterX: "<<ans<<endl;
    }
    
    
    // XOR [1, n-1]
    for(int i = 1; i<size; i++){
    	cout<<"Before1: "<<ans<<endl;
        ans = ans^i;
       	cout<<"After1: "<<ans<<endl;
    }
    
    
    return ans;
}

int main(){
// Check Unique Element.
//int arr1[9] = {1, 1, 6, 2, 3, 3, 4, 4, 2};
//cout<<findUnique(arr1,9);



// FIND DUPLICATES.
function findDuplicatesWithFrequencyCount(arr) {
  const frequencyCount = {};
  const duplicates = [];

  // Count the frequency of each element in the array
  for (const num of arr) {
    frequencyCount[num] = (frequencyCount[num] || 0) + 1;
  }

  // Identify elements with frequency greater than 1 (duplicates)
  for (const num in frequencyCount) {
    if (frequencyCount[num] > 1) {
      duplicates.push(parseInt(num));
    }
  }

  return duplicates;
}

// Example usage:
const inputArray = [1, 2, 3, 4, 2, 5, 6, 3, 7, 8, 9, 1];
const duplicateElements = findDuplicatesWithFrequencyCount(inputArray);

console.log("Duplicate elements:", duplicateElements);




int arr[9] = {8, 7, 2, 5, 4, 7, 1, 3, 6};
cout<<findDuplicate(arr,9);
}

