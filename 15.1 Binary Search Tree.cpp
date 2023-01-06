/*
Binary Search Tree

_The left-sub-tree of a node contains only
nodes with keys lesser than the node’s key. (*********All left data is less than root(**********))

_The right-sub-tree of a node contains only (*********All right data is greater than root(*******))
nodes with keys greater than the node’s key.

_The left and right subtree each must also be a
binary search tree.

(Solve Binary Tree Insert Question from slide 26 (DSA Umair babar).


_Deletion of Node in Binary Search Tree(slide 28 (DSA Umair babar).
Two Steps
1) Node reach
2) Delete(4 Cases)

Case-1 (0 child)
Case-2 (1 child) (Links single child (with it's subtree) directly to
the parent of the removed node)
 	Case 2.0 (left child)
 	Case 2.1 (right child)
Case-3 (2 child)
option1(jo node delete hoa hai, uske left part me se
maximum value utha lao)

option2(jo node delete hoa hai, uske right part me se 
minimum value utha lao )  

More Explanation(From Slides)
Option1
This can be done in any of two ways
_ Replace the data of node M to be deleted with
the smallest value S of its right-sub-tree and then
remove the node S.

The node S surely has degree zero or degree one.
So, can easily be removed by applying case-1 or
case-2 as discussed previously


Option 2
_ Replace the data of node M to be deleted
with the largest value L of its left-sub-tree and
then remove the node L.
_The node L surely has degree zero or degree
one. So, can easily be removed by applying
case-1 or case-2 as discussed previously.




Final Thoughts 
Remember
_Removal of a degree two node
_Apply either Case - 3A or Case - 3B while
removing a node of degree two
*/




#include<iostream>
using namespace std;
//https://github.com/loveBabbar/CodeHelp-DSA-Busted-Series 
// (All the Code Related to Binary Search Tree is Available on the following Link)

