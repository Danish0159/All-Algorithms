/*
+
What is Heap?

Heap is a complete binary tree(CBT) that comes with a heap order property.

+
What is binary tree?
(Every node can have at most 2 childs)

+
What is CBT?
Every level is completely filled except the last level.
Nodes always added from the left.

+
Heap order property (Max Heap, Min Heap)


+
Parent and Child in Heaps
1-based indexing   
left-child(i) = 2 * i  
0-based indexing   
left-child(i) = 2 * i + 1  


1-based indexing   
right-child(i) = 2 * i + 1 
0-based indexing   
right-child(i) = 2 * i + 2 



parent(i) = (i-1) / 2
   parent(6) = (6-1) / 2 = 2

+
Insert: Algorithm (Code in end)
 -> Insert a new element at next available location
of array at index i 
 
 -> Compare newly inserted element with its parent

If the parent of newly inserted element is smaller,
swap them and mark the new parent position
(index).
Repeat step-1 until element is being swapped or
it reached to index 0.

+
Heapify: Algorithm (Code in end)
Heapify is the process of converting a binary tree into a Heap data structure.

 Max-Heapify procedure is used to convert a
binary tree into Max Heap.
 Min-Heapfiy procedure is used to convert a
binary tree into Min Heap.


In order to maintain the max-heap property, we call the procedure MAX-HEAPIFY.
Its inputs are an array A and an index i into the array. When it is called, MAXHEAPIFY assumes that the binary trees rooted at LEFT.i / and RIGHT.i / are maxheaps, but that AŒi might be smaller than its children, thus violating the max-heap
property. MAX-HEAPIFY lets the value at AŒi “float down” in the max-heap so
that the subtree rooted at index i obeys the max-heap property




*/

#include<iostream>
using namespace std;


class heap{
	public:
		int arr[100];
		int size;
		
		heap(){
			arr[0] = -1;
			size = 0;
		}
		
		// Insertion.
		void insert(int val){
				
			size = size + 1;
			int index = size;
		    arr[index] = val; 
		    
		    while (index>1) {
		    int parent = index / 2;
		     if(arr[parent] < arr[index]) {
			   swap(arr[parent] , arr[index]);
			   index = parent;
			 }
		     else {
			 return;
			 }   	
			}
		}
		
		void print(){
			for (int i =1; i<=size;i++){
				
				cout<< arr[i]<< " ";
				
			}
			cout<<endl;
		}
	
	
};



// It Make Sure the provided index is at right position after finish.
// It heapify a subtree rooted with node i.
void heapify(int arr[], int n, int i){
  
    int smallest = i;   
    int l = 2 * i + 1;   // 0-based indexing formula.
    int r = 2 * i + 2;   // 0-based indexing formula.
    
    // If root is less than left child.(only < for 0-based indexing)
    if (l < n && arr[smallest]>arr[l]){
        smallest = l;
    }
    
     // If root is less than right child.
    if (r < n && arr[smallest]>arr[r]){
        smallest = r;
    }
    
   // If largest is not root.
    if(smallest != i){
        swap(arr[smallest],arr[i]);
        
        
      // Recursively heapify the affected sub-tree
        heapify(arr, n, smallest);        
    }
	
}

// (Building a heap OR Heap Creation )
void buildMaxHeap(int arr[], int n){
    // (The Leaf nodes are lying on from (n/2+1 to nth), the leaf nodes are already heap, so we will not work on them,
    // We will run loop from (n/2 to 0 (bottom-up)).


	for ( int i = n/2-1; i>=0; i--) {
        heapify(arr, n, i);
    }

	
}


void heapSort(int arr[], int n){
	int size = n;
	
	while(size>1){
		//step1: swap
	  swap(arr[size],arr[1]);
	  size--;
		
	    //step2: 
	   heapify(arr, size, 1);	
	}
}



int main(){	
//	heap h;
//	h.insert(50);
//	h.insert(55);
//	h.insert(53);
//	h.insert(52);
//	h.insert(54);
//	h.print();

	
	

	int arr[16] = {-1,10, 19, 25, 55, 29, 127, 95, 171, 69, 126, 77, 115, 174, 117, 147 };
    int n = 15;


	buildMaxHeap(arr, n);
	
	
	cout<<"Printing the array Now: "<<endl;
	for ( int i = 1; i<=n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	

	// +Heapf Sort
	// One by one extract an element from heap
	heapSort(arr, n);


	cout<<"Printing the Sorted array Now: "<<endl;
	for ( int i = 1; i<=n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
	return 0;
}


/*
https://www.codingninjas.com/codestudio/problems/build-min-heap_1171167?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar


// 0-based code (For min-heap)
// formula change + <= for bound.

void heapify(vector<int> &arr, int n, int i){
    int smallest = i;   
    int l = 2 * i + 1;   // 0-based indexing formula.
    int r = 2 * i + 2;   // 0-based indexing formula.
    
    // If root is less than left child.(only < for 0-based indexing)
    if (l < n && arr[smallest]>arr[l]){
        smallest = l;
    }
    
     // If root is less than right child.
    if (r < n && arr[smallest]>arr[r]){
        smallest = r;
    }
    
   // If largest is not root.
    if(smallest != i){
        swap(arr[smallest],arr[i]);
        
        
      // Recursively heapify the affected sub-tree
        heapify(arr, n, smallest);        
    }
}


vector<int> buildMinHeap(vector<int> &arr)
{
    int n = arr.size();
    // For 0-based indexing go from 0-n/2-1
    for ( int i = n/2-1; i>=0; i--) {
        heapify(arr, n, i);
    }
   
    return arr;
}

*/
