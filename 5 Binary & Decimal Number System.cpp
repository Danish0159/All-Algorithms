 /*
 
 Binary To decimal
 n = 10
 
 Division     Remainder
 10/2=5        0
 5/2= 2        1
 2/2= 1        0
 1/2= 0        1
 
 0101 (Reverse it) 1010 (This is our answer)

 */
 
 
 
 /*
 Note: Memory Stores the data as bitwise.
 
1)  
To find the reverse of digits and make into number. 
1,2,3 => 321
Formula
Answer = (digit*10(power (i)) + answer )
 
2)
To make a number from digits.
1,2,3 =>123
Formula
Answer = (Answer * 10 ) + digit
*/
 
 
 
// Decimal To Binary Code. 
// #include<iostream>
// #include<math.h>
// using namespace std;
// 
// int main(){
// 	
// int n;
// cin>>n;
// 
// int bit;
// int answer = 0;
// int i = 0;
// 
// while(n!=0){
//  	/*
//  	Suppose 5 is XXX
//  	So when we do with 
//  	XXX
//    1 &
//    We will get the digit.
//  	*/
//  	bit = n & 1;
//   	answer = ( bit * pow(10,i) + answer );
// 	
// 	i++;
// 	n=n>>1;
// }	
// 	cout<<"Answer is "<< answer << endl;
// }
// 


// Binary To Decimal Code. 
// #include<iostream>
// #include<math.h>
// using namespace std;
// 
// int main(){
// 	
// int n;
// cin>>n;
// 
// int digit;
// int answer = 0;
// int i = 0;
// 
// while(n!=0){
//  	digit = n % 10;
//  	
//  	if(digit==1){
//   	answer =( pow(2,i) + answer );
//	  }
// 	
// 	i++;
// 	n=n/10;
// }	
// 	cout<<"Answer is "<< answer << endl;
// }
