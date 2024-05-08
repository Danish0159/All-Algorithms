#include<iostream>
using namespace std;

// Factorial
int fact(int n){
	int factorial = 1;
	
	for(int i = 1; i<=n; i++){
		factorial = factorial * i;
	}
	
	return factorial;
}

int nCr(int n, int r){

	int num = fact(n);
	
	int denom = fact(r) * fact(n-r);
	
	return num/denom;
}


int main(){
	
	int n;
	int r;
	
	cout<<"Enter n"<<endl;
	cin>>n;
	cout<<"Enter r"<<endl;
	cin>>r;
	
    cout<<nCr(n,r);
}
