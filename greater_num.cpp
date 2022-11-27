#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<" enter the first number : "<<endl;
    cin >> a;
    cout << " enter the second number : "<< endl;
    cin >> b;
    if( a > b){
        cout << " the greater number between "<<a<<" and "<<b<< " is " <<a<<endl;
    }
    else{
        cout << " the greater number between "<<a<<" and "<<b<< " is " <<b<<endl;
    }
    return 0;
}