#include <iostream>
using namespace std;

int sum(int a , int b); // we declared prototype of same function name sum
int sum(int a , int b, int c); // here also same function name but different data type and arguments with different data types
double sum(double a, int b); // same goes here
double sum(double a, double b); //  same data type with same function name

int main(){
    
    cout << "the sum of 3 and 6 is : "<<endl <<sum(3,6) <<endl; // giving value to the data to proceed..!!
    cout << "the sum of 3, 7 and 6 is : "<<endl <<sum(3, 7, 6) <<endl; // this will match up with prototype 2 because of 3 given arguments and all satisfy integers..!
    cout << "the sum of 3.14 and 6.14 is : "<<endl <<sum(3.14, 6.14) <<endl; //this will matchup with prototype 4..!
    cout << "the sum of 3.14 and 6 is : "<<endl <<sum(3.14, 6) <<endl;// this will matchup with prototype 3..!

    return 0;
}
int sum(int a, int b){      // function define section defining all the function here....
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}
double sum(double a, int b){
    return a+b;
}
double sum(double a, double b){
    return a+b;
}