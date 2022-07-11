//Problem1
//For Description+Code (Go to following URL)
//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

class Solution {
public:
    int subtractProductAndSum(int n) {
  	int digit;
	int sum=0;
	int product = 1;
	
    while(n!=0){
    digit = n%10;
    n = n/10;
    
	product*=digit;
	sum +=digit;
	}
        
        return product-sum;
    }
}; 




//Problem2
// For Description+Code (Go to following URL)
//https://leetcode.com/problems/number-of-1-bits/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int count = 0;
        //After all the shifts n will become zero.
        
        while(n!=0){    
        // Checking the last bit.
        /* (If we take & with one we will get 1 if the last bit is 1)
        10000001
               1
        --------
               1
        */   
        if(n&1){
            count++;
        }   
       // Right Shift all the remaining bits.
        n = n>>1;
        }
        
        return count;
    }
};

