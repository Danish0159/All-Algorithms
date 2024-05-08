#include <iostream>
using namespace std;
  
int main(){
// 0,1,1,2,3,5,8,13,21
// Every number is a sum of its previous 2 numbers.
	
	int n = 10;
	
	int a = 0;
	int b = 1;
	
	cout<<a<<" ";
	cout<<b<<" ";
	for(int i = 1; i<n;i++){
	
	int nextNumber= a+b;
	cout<<nextNumber<<" ";
	
	a = b;
	b = nextNumber;

	}
	
}


