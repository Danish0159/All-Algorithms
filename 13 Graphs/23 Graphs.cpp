/*
(For practice see the slide)




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

->Weighted Graph(If weights are placed)


-> Path (Sequence of node where you are travelling, every node comes once, if cycle, then its called cyclic graph).



Graph Representations
(n = number of nodes)
(m = number of edges)
(connected edges information) 
    1) ->Adjacency Matrix
	->Adjacency List
_A square matrix (2D array) used to represent a
finite graph. The elements of the matrix indicate
whether pairs of vertices are adjacent or not in the
graph.

2) Adjacency List
Create a list (1D array) of N element where N is
number of nodes.
 Each index of 1D array holds the linked list of
neighbors of a particular vertex in the graph.

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

