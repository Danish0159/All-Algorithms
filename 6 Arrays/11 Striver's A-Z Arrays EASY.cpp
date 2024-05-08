/*
1) Find the union
Description
https://takeuforward.org/data-structure/union-of-two-sorted-arrays/
*/



// Two pointer approach.
// While traversing we may encounter three cases.
// arr1[i] < arr2[j], arr2[j] < arr1[i], or arr1[i] === arr2[j].


function unionFun(arr1, arr2){
    // Set will help in storing only the unique values.
    let union = new Set();

    let i = 0;
    let j = 0;
    
    while(i < arr1.length && j < arr2.length){
        if(arr1[i] < arr2[j]){
            union.add(arr1[i]);
            i++;
            // If we do not use Set, then we have to check in the array if the element do not exist using !includes, 
            // if(!union.includes(arr1[i])){
            //     union.push(arr1[i]);
            // }
            // i++;
        }
        else if(arr2[j] < arr1[i]){
              union.add(arr2[j]);
              j++;
        }
        else if(arr1[i] === arr2[j]){
             union.add(arr2[j]);
             i++;
             j++;
        }
    }
    while(i < arr1.length){ // If any elements left in arr1 (Coz we using && in while loop)
             union.add(arr1[i]);
             i++;
    }
    while(j < arr2.length){ // If any elements left in arr2
         union.add(arr2[j]);
         j++;
    }
    console.log(union);
}

let arr1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];  
let arr2 = [2, 3, 4, 4, 5, 11, 12];
unionFun(arr1, arr2);



/*
2) Find the number that appears once, and other numbers twice.
Description
https://leetcode.com/problems/single-number/submissions/1248241609/

*/
 



/*
3) Find missing number in an array.
Description
https://leetcode.com/problems/missing-number/
https://takeuforward.org/arrays/find-the-missing-number-in-an-array/
*/



/*
4) Count Maximum Consecutive One's in the array

Description
https://leetcode.com/problems/max-consecutive-ones/submissions/1248933516/
https://takeuforward.org/data-structure/count-maximum-consecutive-ones-in-the-array/

*/




/*
5) Longest Subarray with given Sum K(Positives)
Description
https://takeuforward.org/data-structure/longest-subarray-with-given-sum-k/
*/


APROACH1: (BETTER APPROACH) 
// If we have to return subArray.

var findMaxConsecutiveOnes = function(nums, p) {
    let maxLength = 0;
    let endingIndex = 0;

    for (let i = 0; i < nums.length; i++) {
        let sum = 0; // Initialize sum for each potential subarray
        let k = 0;
        while (i + k < nums.length) { // Fix the condition to ensure not exceeding array bounds
            sum += nums[i + k]; // Update sum by adding the current element
            k++;
            if (sum === p) {
                if (k > maxLength) {
                    maxLength = k;
                    endingIndex = i + k - 1;
                }
                break; // No need to reset k, break out of while loop
            }
        }
    }

    return nums.slice(endingIndex - maxLength + 1, endingIndex + 1);
}

console.log(findMaxConsecutiveOnes([1, 2, 3, 4, 5], 15));


// If we have to return just the length of subArray.

var findMaxConsecutiveOnes = function(nums, p) {
    let maxLength = 0;
    let len = 0;

    for (let i = 0; i < nums.length; i++) {
        let sum = 0; // Initialize sum for each potential subarray
        let k = 0;
        while (i + k < nums.length) { // Fix the condition to ensure not exceeding array bounds
            sum += nums[i + k]; // Update sum by adding the current element
            k++;
            if (sum === p) {
                len = Math.max(len, k);
                break; // No need to reset k, break out of while loop
            }
        }
    }

    return len;
}

console.log(findMaxConsecutiveOnes([2,3,5,1,9], 10));



/*
6) Longest Subarray with sum K | [Postives and Negatives]
Description
https://takeuforward.org/arrays/longest-subarray-with-sum-k-postives-and-negatives/
*/

// The above code works for both positive and negative.


