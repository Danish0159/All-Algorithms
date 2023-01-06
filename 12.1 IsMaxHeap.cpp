#include <iostream>
#include <vector>
using namespace std;
 
// Function to check if a given array represents min-heap or not
bool checkMinHeap(int A[], int i,int n)
{
    // if `i` is a leaf node, return true as every leaf node is a heap
    if (2*i + 2 >n) {
        return true;
    }
 
    // if `i` is an internal node
 
    // recursively check if the left child is a heap
    bool left = (A[i] <= A[2*i + 1]) && checkMinHeap(A, 2*i + 1, n);
 
    // recursively check if the right child is a heap (to avoid the array index out
    // of bounds, first check if the right child exists or not)
    bool right = (2*i + 2 == n) ||
            (A[i] <= A[2*i + 2] && checkMinHeap(A, 2*i + 2, n));
 
    // return true if both left and right child are heaps
    return left && right;
}
 
int main()
{
	int arr[15] = {10, 19, 25, 29, 69, 55, 115, 95, 77, 127, 126, 171, 174, 117, 147};
    int n = sizeof(arr)/sizeof(arr[0]);;
 
    // start with index 0 (the root of the heap)
    int index = 0;
 
    if (checkMinHeap(arr, index, n)) {
        cout << "The given array is a min-heap";
    }
    else {
        cout << "The given array is not a min-heap";
    }
 
    return 0;
}
