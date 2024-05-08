// Problem 3
// For Description + Code (Go to the following URL)
// https://leetcode.com/problems/reverse-integer/


/*
Normal Case + One Case is If the number come outside the range.

ans*10>INT_MAX (Should Not)
ans*10<INT_MIN (Should Not)

Because these errors will accur run time, so we have to check before.
Take 10 to other side.

ans>INT_MAX/10
and<INT_MIN/10

So we will check these statements.

*/
class Solution {
public:
    int reverse(int x) {

int ans = 0;

while(x!=0){
	int digit = x % 10;	
    
	if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
		return 0;
	}
	ans = (ans * 10 ) + digit;
	x=x/10;
}
return ans;
}
};










// Problem 4
// For Description + Code (Go to the following URL)
// https://leetcode.com/problems/complement-of-base-10-integer/submissions/



class Solution {
public:
    int bitwiseComplement(int n) {
     
/*
n = 5 (101) So we need (010) answer.
 
In memory 
n = 000000.....101
~n = 111111.....010 
But we have to ignore 1111111
So create a mask that is 000000000111
Now If take & between mask and ~n we get answer

How to create a mask now.
We have to run loop until the latest left 1.

n = 0000000000000....000101
n>>1;

1st   0000000..00010      !=0
2nd   00000000..0001      !=0
3rd   00000000..0000      !=0

Now 
take m =00000000000000000
LeftShift the bits and take OR with 1.
*/

 int m = n;
 int mask = 0;
    
// Edge Case
if (m==0)
      return 1;
        
        
  while(m!=0){
   mask = (mask << 1) | 1 ;     
       
   m = m>>1;   
  } 

int ans = ~n & mask;
return ans;
        
    }
};

// Problem 5
// For Description + Code (Go to the following URL)
// https://leetcode.com/problems/power-of-two/

// Brute Force Solution.
class Solution {
public:
    bool isPowerOfTwo(int n) {
        // int limit is upto 2 ki power 31-1 (We will not take 31 coz it is ans-1)
        for(int i=0; i<=30;i++){
            if(pow(2,i)==n){
                return true;
            }            
        }
        
        return false;
    }
};


