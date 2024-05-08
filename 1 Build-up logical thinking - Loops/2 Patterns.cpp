//Problem1
//#include <iostream>
//using namespace std;
//  
//int main()
//{
//	/*
//	Desired Pattern.
//	
//	***
//	***
//	***


//	
//	So, there are total 3 rows, and every row has 3 columns.(That's a relation).
//	*/ 
//	
//	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	
//	// loop for Total rows.
//
//	while(i<=n){
//		int j = 1;
//
//	// Loop for Total columns.
//		while(j<=n){
//			cout<<"*";
//			j++;
//		}		
//		cout<<endl;
//		i++;
//	}
//	
//    return 0;
//}



//	/*
//	Desired Pattern.
//	
//	111
//	222
//	333
//	
//	*/ 
//Problem2
//#include <iostream>
//using namespace std;
//  
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	
//
//	while(i<=n){
//		int j = 1;
//
//		while(j<=n){
//			cout<<i;
//		    j++;
//		}		
//		cout<<endl;
//		i++;
//	
//	}
//	
//    return 0;
//}
//




//	/*
//	Desired Pattern.
//	
//	123
//	123
//	123
//	
//	*/ 

//Problem3
//#include <iostream>
//using namespace std;
//  
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	
//
//	while(i<=n){
//		int j = 1;
//
//		while(j<=n){
//			cout<<j;
//		    j++;
//		}		
//		cout<<endl;
//		i++;
//	
//	}
//	
//    return 0;
//}



//	/*
//	Desired Pattern.
//	
//	321
//	321
//	321
//	
//	*/ 

//Problem4
//#include <iostream>
//using namespace std;
////  
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	
//	while(i<=n){
//		int j = 1;
//
//		while(j<=n){
//			cout<<n-j+1;
//		    j++;
//		}		
//		cout<<endl;
//		i++;
//	
//	}
//	
//    return 0;
//}


//	/*
//	Desired Pattern.
//	
//	123
//	456
//	789
//	
//	*/ 

//Problem5
//#include <iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	int count=1;
//	while(i<=n){
//		int j = 1;
//		while(j<=n){
//			cout<<count <<" ";
//			count++;
//		    j++;
//		}		
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}


//	/*
//	Desired Pattern.
//	
//	*
//	**
//	***
//	
//	*/ 

// Problem6.
//#include <iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	int count=1;
//	while(i<=n){
//		int j = 1;
//		while(j<=i){
//			cout<<"*";
//		    j++;
//		}		
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}



//	/*
//	Desired Pattern.
//	
//	1
//	22
//	333
//	4444
//	*/ 

// Problem7.
//#include <iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	int count=1;
//	while(i<=n){
//		int j = 1;
//		while(j<=i){
//			cout<<i;
//		    j++;
//		}		
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}


//	/*
//	Desired Pattern.
//	
//	1
//	23
//	345
//	4567

//	*/ 

// Problem8.  imp
//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	int count=1;
//	while(i<=n){
//		int j = 1;
//		// Store the value of row before the loop, 
//		// and then use that in the inner loop, you can perform addition as well(But not on original row value).
//		int value = i;
//		while(j<=i){
//			cout<<value;
//		    j++;
//		    value++;
//		}		
//		count--;
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}


//	/*
//	Desired Pattern.
//	
//	1
//	23
//	345
//	4567

// Every row is starting with the value of that row.
//	*/ 

// Problem8.(Version Without using the value flag(But changing the inner value of loop). imp
//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	while(i<=n){
//		int j = 1;
//		cout<<i;
//		while(j<i){
//		cout<<(i+j);
//		j++;
//		}		
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}


//	/*
//	Desired Pattern.
//	
//	1
//	23
//	345
//	4567

// Every row is starting with the value of that row.
//	*/ 

// Problem8.(Version Without using the value flag(Not changing the inner value of loop). imp
//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	while(i<=n){
//		int j = 1;
//		while(j<=i){
//		cout<<(i+j-1);
//		j++;
//		}		
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}



//	/*
//	Desired Pattern.
//	
//	1
//	21
//	321
//	4321

//	*/ 

// Problem9. (Version with not changing the inner loop)
//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	while(i<=n){
//		int j = 1;
//		while(j<=i){
//		cout<<(i-j+1);
//		j++;
//		}		
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}


//	/*
//	Desired Pattern.
//	
//	AAA
//	BBB
//	CCC

//	*/ 

// Problem10
//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	while(i<=n){
//		int j = 1;
//		while(j<=n){
//		char ch = 'A' + i - 1;
//		cout<< ch;
//		j++;
//		}		
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}

//	/*
//	Desired Pattern.
//	
//	ABC
//	ABC
//	ABC

//	*/ 

// Problem11
//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	while(i<=n){
//		int j = 1;
//		while(j<=n){
//		char ch = 'A' + j - 1;
//		cout<< ch;
//		j++;
//		}		
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}


//	/*
//	Desired Pattern.
//	
//	ABC
//	DEF
//	GHI

//	*/ 

// Problem12
//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	int count = 0;
//	while(i<=n){
//		int j = 1;
//		while(j<=n){
//		char ch = 'A' + count;
//		cout<< ch;
//		count++;
//		j++;
//		}		
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}


//	/*
//	Desired Pattern.
//	
//	ABC
//	BCD
//	CDE

//	*/ 
//	cout<<(i+j-1);
// Problem13

/*
(This is formula for desired pattern.
i+j-1 = 1
So map 1 to A, (So add A on both sides).
i+j-1 +A = 1+A
i+j-2+A = A (This is the desired formula.
*/

//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	while(i<=n){
//		int j = 1;
//		while(j<=n){
//		char ch = i + j - 2 + 'A';
//		cout<<ch;
//		j++;
//		}		
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}


//	/*
//	Desired Pattern.
//	
//	A
//	BB
//	CCC

//	*/ 
// Problem14

//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	while(i<=n){
//		int j = 1;
//		while(j<=i){
//		char ch = 'A'+i-1;
//		cout<<ch;
//		j++;
//		}		
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}


//	/*
//	Desired Pattern.
//	
//	D
//	CD
//	BCD
//  ABCD

//	*/ 
// Problem15

//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	while(i<=n){
//		int j = 1;
//		char start = 'A' + n - i;
//		while(j<=i){
//		cout<<start;
//		start++;
//		j++;
//		}		
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}



//	/*
//	Desired Pattern.
//	
//	     *
//	    **
//	   ***
//    ****

//	*/ 
// Problem16
//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	while(i<=n){
//		int j = 1;
//		
//		//Loop For Displaying Space.
//		int space = n-i;
//     	while(space){
//		cout<<" ";
//		space--;
//		}	
//		
//		//Loop For Displaying Asterics.
//		while(j<=i){
//		cout<<"*";
//		j++;
//		}	
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}

//	Desired Pattern.
//    ****
//	  ***
//	  **
//	  *

//	*/ 
// Problem17
//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	while(i<=n){
//		int j = 1;
//		
//		int Stars = n-i+1;
//     	while(Stars){
//		cout<<"*";
//		Stars--;
//		}	
//		
//		// Loop For Displaying Asterics.
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}

//	Desired Pattern.
//    ****
//	   ***
//	    **
//	     *

//	*/ 
// Problem18
//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	while(i<=n){
//		int j = 1;
//		int Space = i-1;
//     	while(Space){
//		cout<<" ";
//		Space--;
//		}	
//		int Stars = n-i+1;
//     	while(Stars){
//		cout<<"*";
//		Stars--;
//		}	
//		// Loop For Displaying Asterics.
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}


//	Desired Pattern.
//    1111
//	   222
//	    33
//	     4

//	*/ 
// Problem19
//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	while(i<=n){
//		int j = 1;
//		int Space = i-1;
//     	while(Space){
//		cout<<" ";
//		Space--;
//		}	
//		int number = n-i+1;
//     	while(number){
//		cout<<"*";
//		Stars--;
//		}	
//		// Loop For Displaying Asterics.
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}

//	Desired Pattern.
//  ---1---
//	--121-- 
//	-12321-  
//  1234321	  

//	*/ 
// Problem20
//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	while(i<=n){
//	
//	int Space = n-i;
//	//Print Space.
//     	while(Space){
//		cout<<" ";
//		Space--;
//		}	
//		
//    int j = 1;
//	//Print Left Triangle.
//     	while(j<=i){
//		cout<<j;
//		j++;
//		}	
//    //Print Right Triangle.
//
//		j = 1;
//		while(j<i){
//		cout<<(i-j);
//		j++;
//		}	
//
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}



//	Desired Pattern.(Dabang pattern)

//			 1 2 3 4 5	
// 1 2 3 4 5 5 4 3 2 1  1
// 1 2 3 4 * * 4 3 2 1  2
// 1 2 3 * * * * 3 2 1  3 
// 1 2 * * * * * * 2 1  4 
// 1 * * * * * * * * 1  5

//	*/ 
// Problem20
//#include<iostream>
//using namespace std;
//int main()
//{	
//	int n;
//	int i = 1;
//	cout<<"Enter the number: "<<endl;
//	cin>>n;
//	while(i<=n){
//	int j = 1;	
//	
//	// Print Left Triangle.
//     	while(j<=(n-i+1)){
//		cout<<j;
//		j++;
//		}	
//		
//	// Stars	
//    j = 1;
//   	while(j<=(i-1)*2){
//		cout<<"*";
//		j++;
//		}	
//
//	// Stars
//		j = 1;
//		while(j<=(n-i+1)){
//		cout<<(n-i+2-j);
//		j++;
//		}	
//
//		cout<<endl;
//		i++;
//	}
//    return 0;
//}

