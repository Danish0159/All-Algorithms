/*
Description
https://leetcode.com/problems/unique-number-of-occurrences/
*/

#include<iostream>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       map<int,int>m; // first map to store the values and its occurences.
       for(int i=0; i<arr.size(); i++){
          if(m.find(arr[i])==m.end())
             
             m[arr[i]]=1;
          else
             m[arr[i]]++;
        }

       map<int,int>b; // map to check if each element has unique occurence.
       for (auto i : m) {
          if(b.find(i.second)==b.end())
             b[i.second]=1;
          else 
             return false;
       }
       return true;
    }
};


// With frequncey method, we can solve and check all the values that are frequency === 1  are unique values.