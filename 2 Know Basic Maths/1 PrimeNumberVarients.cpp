/*
Getting Started:

Problem Solving Skill/Thought Process To solve a problem.

How to solve a problem?

First We will Understand the problem.
Given Values.
Approach.
Program.

*/

// Prime Number Code
/*A prime number is a natural number with exactly 2 divisors
1 and the number itself. */



int n;
for(let i = 0; i < n; i++){
  if(n % 10){

 }
}


// Varient1.
#include <iostream>
using namespace std;

int main()
{	
	int i = 1;
	int j = 0;
	int n;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	
	while(i<=n){
		if(n%i==0){
			j++;
		}
	i++;
	}
	
	if(j==2){
		cout<<"Prime Number"<<endl;
	}
	else{
		cout<<"Not a Prime Number: "<<endl;
	}

    return 0;
}

/*
// Varient2.
#include<iostream>
using namespace std;  
int main()
{
	int i = 2;
	int n;
	cout<<"Enter the number: "<<endl;
	cin>>n;
	
	while(i<n){
		// If it got divided with any number in-between.
		if(n%i==0){
		cout<<"Not Prime Number"<<endl;
		return 0;
		}
		i++;
	}
	cout<<"A prime number: "<<endl;
    return 0;
}

*/
