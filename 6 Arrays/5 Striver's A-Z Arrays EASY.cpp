1) Find the largest element in an array.
https://takeuforward.org/data-structure/find-the-largest-element-in-an-array/



2) Find Second Smallest and Second Largest Element in an array

function getSecond(arr){
 
    //Find the largest and smallest element.
    let small = Infinity;
    let large =  -Infinity;
    for(let i = 0; i < arr.length; i++){
        small = Math.min(small, arr[i]);
        large = Math.max(large, arr[i]);
    }
    let second_small = Infinity;
    let second_large = -Infinity
    
    //Find the secondLargest and secondSmallest.
      for(let i = 0; i < arr.length; i++){
          if(arr[i] < second_small && arr[i] !== small){
            second_small = arr[i];
          }
          if(arr[i] > second_large && arr[i] !== large){
            second_large = arr[i];
          }
    }
  
  console.log("Second smallest is " + second_small);
  console.log("Second largest is " + second_large);
}


getSecond([1, 2, 4, 6, 7, 5]);




