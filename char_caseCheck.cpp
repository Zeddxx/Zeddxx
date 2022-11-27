#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter your character to check if it is Uppercase or lowercase or a digit : "<<endl;
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout << "The character "<<ch<<" is uppercase character "<<endl;
    }
    else if(ch>=97 && ch<=122){
        cout << "The character "<<ch<<" is LowerCase character "<<endl;
    }
    else if(ch>=48 && ch<=57){
        cout <<"The character "<<ch<<" is a Digit "<<endl;
    }
    else{
        cout << "this character "<<ch<<" is special character "<<endl;
    }
    return 0;
}