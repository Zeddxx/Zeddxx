#include <iostream>
using namespace std;
/* In call by reference, original value is modified because we pass reference (address). */

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}
void displayline(){
    cout<<"------------------------------------"<<endl;
}
int main(){
    int x;
    int y;
    cout <<"Enter the value of x :"<<endl;
    cin>>x;
    displayline();
    cout<<"Enter the value of y :"<<endl;
    cin>>y;
    displayline();
    cout<<"The value of x before swap :"<<endl<<x<<endl;
    displayline();
    cout<<"The value of y before swap :"<<endl<<y<<endl;
    displayline();

    swap(&x,&y);
    cout<<"the value after swap of x will be :"<<x<<endl;
    displayline();
    cout<<"the value after swap of y will be :"<<y<<endl;
    displayline();


    return 0;
}
// & .\"swap_call_by_ref.exe"