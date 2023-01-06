/*
Type Of Data Structure(Combination of nodes and edges)

Types
_Undirected(where all the edges are bidirectional)
_Directed


-> Node(entity to store data)
-> Edge(Connectivity Of nodes)

(For Undirected)
->Degree(v) 
_Number of edges connected to v.


(For Directed)
-> In-Degree
_Kitni meri trf a rahi hen.
-> Out-Degree
_Kitni meri se bahar ja rahi he.

*/


#include<iostream>
using namespace std;



int main(){
 int arr[5] = {4, 19, 7, 5, 16};
 int size = sizeof(arr)/sizeof(arr[0]);
 longRunningFunction(arr, size);
 //cout<<counter;
 return 0;
}

