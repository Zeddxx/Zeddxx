#include <iostream>
using namespace std;

int main(){
    int a;
    cout << " enter the number : "<<endl;
    cin >>a;
    if(a > 0){
        cout <<" the number "<<a <<" is positive "<<endl;
    }
    else if(a == 0){
        cout << "the number "<<a <<" is zero "<<endl;
    }
    else{
        cout <<" the number "<<a <<" is negative "<<endl;
    }
    return 0;
}