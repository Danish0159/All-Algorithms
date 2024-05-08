/*
Recursion: 
A function calls itself is called recursion.
// Direct recursion.
solve(int n){
solve(n);
}

Big problem solution depends on small problem of same type.
Example: find (2)power(n)

So (2)power(3) = 2 * 2 * 2
that shows that big problem is depending on small problem. 

F(n) = 2 * F(n-1) -> Recurence Relation.
 
 
Example: Factorial 5!?
So 5! = 5*4*3*2*1
that shows  5! = 5 * 4!
n! = n * (n-1)!
F(n) = n * F(n-1)


Recursion (baseCase, RecursivePart)
Base Case:  
-> All recursive definitions have to have a nonrecursive part If they didn't, there would be
no way to terminate the recursive path.
-> Such a definition would cause infinite
recursion.
-> This non-recursive part is often called the
base-case.

Recursive Defination:
A function/method can call itself; if set up
that way, it is called a recursive method.

*/
#include<iostream>
using namespace std;


void fiboNachi(int n1, int n2){
	// Base Call.
	if(n1 > 30 || n2 > 30){
		return;
	}

	// Processing.
	int nextNumber = n1 + n2;
	cout<<nextNumber<<" ";
	
	//Recursive Call.
	return fiboNachi(n2, nextNumber);
}


void reachHome(int src, int dest){
	
 cout<<"Source: "<< src << "Destination: "<<dest<<endl;
 	
 	// base case
 	if(src == dest){
 		cout<<"Pohnch gya ghar: "<<endl;
 		return;
	 }
	 
	 src++;
	 reachHome(src, dest);
}

int sum(int n){
  // base case
  if(n==0){
  	return 0;
  }
  
  return n + sum(n-1);
}

void print(int n){
	// base case
	if(n==0){
		return;	
	}

 	cout << n << endl;//Tail recursion.
	print(n-1);
 //   cout << n << endl; // Head Recursion. (If the processing part is after recursive function, it is head recursion).
}

int factorial(int n){
	// base case.
	if(n == 0){
		return 1;	
	}
	
	// recursive function.
	return n * factorial(n-1);
}


int main() {

int n;
cin>>n;
int ans = factorial(n);
cout<<"Factorial: "<<ans<<endl;


cout<<"Counting: "<<endl;
print(n);


cout<<"Sum: "<<endl;
cout<<sum(n)<<endl<<endl;


int src = 1;
int dest = 10;
reachHome(src, dest);



int n1 = 0;
int n2 = 1;
cout<<n1<<" "<<n2<<" ";
fiboNachi(n1,n2);

return 0;
}


/*
fibinachi series.
https://leetcode.com/problems/fibonacci-number/submissions/847028358/
*/
