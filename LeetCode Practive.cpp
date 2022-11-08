//https://leetcode.com/problems/longest-common-prefix/

#include<iostream>
#include <string>
using namespace std;



// Given A Try(But Solve It Later).(With Two for loops)
int main(){
	
	string strs[3] = {"flower","flow","flight"};
	
	string resultString;
    
    string s1 = strs[0];
    string s2 = strs[1];
    string subString;
    cout<<s1;
    cout<<s2;

	int n;
    if(strs[0].length()>strs[1].length()){
    	n = strs[1].length();
    	cout<<n;
	}
	else{
		n = strs[0].length();
		cout<<n;
	}
	
	for(int i = 0; i<n; i++){
		if(s1[i]==s2[i]){
			
		}
		else{
			
		}
	}

}
