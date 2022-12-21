/*
All About Char Arrays, Strings.

*/

#include<iostream>
using namespace std;

bool checkPalindrome(char arr[], int n){
	int s = 0;
	int e = n-1;
	
	while(s<=e){
		if(arr[s] != arr[e]){
			return 0;
		}
		else{
			s++;
			e--;
		}
	}
	return 1;
}

// Just like reverse in int.
void reverse(char name[], int n){
	int s = 0;
	int e = n-1;
	
	while(s<e){
		swap(name[s++], name[e--]);
	}
}


int getLength(char name[]){
	int count = 0;
	for (int i = 0; name[i]!='\0';i++){
		count++;
	}
	return count;
}

	
	
int main() {
/*
  Simple Character (Stores only 1 character).
 char a = 'z';
 cout<<a<<endl;
*/

  // Strings are 1-Dimensional char Array.
 cout<<"Enter Name: "<<endl;
 char name[20];
 // After storing name it will store null char('\0'-> Terminator) at the endl;
  // First Enter "Danish" then "Muhammad Danish" and observe.
 /*
 So, Basically cin stops execution on 
 -> Space (_)
 -> Tab (\t)
 -> newline (\n)
*/
 cin >> name;
 cout <<"Your name is: "<<name<<endl;
 int n = getLength(name);
 cout<< "Length: "<< n;

 reverse(name, n);
  cout <<"\nReversed Name: "<<name<<endl;

// Danish and NOON test cases.
cout<<"Palindrome or Not: "<<checkPalindrome(name, n);

}

/*
Q1
Reverse a String: https://leetcode.com/problems/reverse-string/submissions/845457040/
class Solution {
public:
    void reverseString(vector<char>& s) {
    int start = 0;
	int end = s.size()-1;
	
	while(start<end){
		swap(s[start++], s[end--]);
	}
    }
};


Q2
Check Palindrome:
What is Pallindrome?

if "string = reverse of string" then it is pallindrome.
https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5



*/
