/* 
Recursion: 
*/
#include<iostream>
using namespace std;


int mySecretKey(int num)
{
cout<<num;

if(num<22){
cout<<"Inside 22 If: "	<<endl;
mySecretKey( mySecretKey( mySecretKey( ++num ) ) );
}
return (num);
}

int main() {
mySecretKey(20);
}


