/*
2D arrays prepration.
1) Hacker Rank.
2) Placement Series Questions.
3) Programming Fundementalls Labs.
*/


//Problem3
//https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6&leftPanelTab=1
/*




//Problem 2
//https://leetcode.com/problems/spiral-matrix/submissions/881971762///*
// Run the following code on (https://www.programiz.com/cpp-programming/online-compiler/)
/*
#include<iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int> >& matrix) {
 vector<int> ans;
    int rows = matrix.size();
    int cols = matrix[0].size();


    int count = 0;
    int totalElements = cols * rows;

    int startingRow = 0;
    int endingColumn = cols-1;
    int endingRow = rows-1;
    int startingColumn = 0;

    while(count < totalElements) {

     //Starting Row
     for(int col = startingColumn; count < totalElements && col <= endingColumn; col++){
        cout<<matrix[startingRow][col];
        ans.push_back(matrix[startingRow][col]);
        count++;
     }
     startingRow++;
     
     //Ending Column
      for(int row = startingRow; count < totalElements && row <= endingRow; row++){
        cout<<matrix[row][endingColumn];
        ans.push_back(matrix[row][endingColumn]);
        count++;
     }
     endingColumn--;
     
     //Ending Row      
     for(int col = endingColumn; count < totalElements && col >= startingColumn; col--){
        cout<<matrix[endingRow][col];
        ans.push_back(matrix[endingRow][col]);
        count++;
     }
     endingRow--;
     
      //startingColumn    
     for(int row = endingRow; count < totalElements && row >= startingRow; row--){
        cout<<matrix[row][startingColumn];
        ans.push_back(matrix[row][startingColumn]);
        count++;
     }
     startingColumn++;
    }    
    return ans;
  }
  

int main(){
	vector<vector<int>> matrix
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
	spiralOrder(matrix);

}
*/



//Problem1
//https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6&leftPanelTab=1
/*
#include<iostream>
using namespace std;

//Global veriables 
const int rows=3;
const int columns=3;
//getData function 
void getData(int matrix_A[][columns])
{
//Getting input for MATRIX_A	
cout<<"Please enter the elements of MATRIX_A :"<<endl;
//outer for_loop
for(int i=0;i<rows;i++)
{
//inner for_loop	
for(int j=0;j<columns;j++)
{
cout<<"Enter element a"<<(i+1)<<(j+1)<<": ";
cin>>matrix_A[i][j];	
}
}
}

//function for display
void display(int matrix_A[][columns])
{
//displaying Matrix_A
cout<<"Matrix_A:";
//outer loop
for(int i=0;i<rows;i++)
{cout<<endl;
//inner loop
for(int j=0;j<columns;j++)
{
cout<<matrix_A[i][j]<<"\t"; 
}
}
}

// My Approach
//void waveDraw(int matrix_A[][columns]){
//for(int i=0;i<columns;i++){
// if(i % 2 == 0){
//	for(int j=0;j<rows;j++){
//	   cout<<matrix_A[j][i]<<" ";
//}
//
//}
// else{
//	for(int j=0;j<rows;j++){
//	   cout<<matrix_A[rows-j-1][i]<<" ";		
//	}
//}
//}
//}

// Improved Approach (From Babbar).
void waveDraw(int matrix_A[][columns]){
 for(int col=0;col<columns;col++){
// For Odd -> Go From Bottom To Top.
    if(col&1){
	 for(int row=rows-1; row >= 0; row--){
	   cout<<matrix_A[row][col]<<" ";	
}
}
// For 0 or even -> Go From Top To Bottom.
 else{
	for(int row=0;row < rows; row++){
	   cout<<matrix_A[row][col]<<" ";
	}
}
}
}


//main function
int main()
{
//2D Array	
int matrix_A[rows][columns];
getData(matrix_A);	
display(matrix_A);	
waveDraw(matrix_A);
return 0;
}
*/
