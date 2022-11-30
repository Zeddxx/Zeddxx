#include <iostream>
#include <cmath>

using namespace std;

void display_line();
int add_of_num(int num1 , int num2);
float multi(int x, int y);
int sub(int s1, int s2);

int main(){
    display_line();
    int num1 , num2 ;
    int addition;
    int x,y;
    int multiply;
    int substraction;
    int s1, s2;
    cout << "enter the first number to add : " <<endl;
    cin >>num1;
    cout << "enter the second number to add: " <<endl;
    cin>>num2;
    addition = add_of_num(num1 , num2);
    cout << "the addition of two number will be : "<< endl <<addition <<endl;
    display_line();
    cout << "enter the first number to multiply : " <<endl;
    cin >>x;
    cout << "enter the second number to multiply : " <<endl;
    cin >>y;
    multiply= multi(x,y);
    cout<<"multiplication of two given number will be: "<<endl << multiply <<endl;
    display_line();
    cout << " enter num to subtract :"<<endl;
    cin>>s1;
    cout<<"enter second number to subtract :"<<endl;
    cin>>s2;
    substraction= sub(s1,s2);
    cout << " the substracted solution will be : "<< endl << substraction <<endl;
    display_line();
}
void display_line(){
    cout << "* * * * * * " <<endl;
    cout << "* * * * * * " <<endl;
    cout << "* * * * * * " <<endl;
}
int add_of_num( int num1 , int num2){
    int add;
    add=num1 + num2;
    return(add);
}
float multi(int x, int y){
    int multiplication;
    multiplication= x * y;
    return(multiplication);
}
int sub(int s1, int s2){
    int minus;
    minus= s1-s2;
    return(minus);
}