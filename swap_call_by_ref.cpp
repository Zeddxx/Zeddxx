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
int main(){
    int x;
    int y;
    cout <<"Enter the value of x :"<<endl;
    cin>>x;
    cout<<"Enter the value of y :"<<endl;
    cin>>y;
    cout<<"The value of x before swap :"<<x<<endl;
    cout<<"The value of y before swap :"<<y<<endl;


    swap(&x,&y);
    cout<<"the value after swap of x will be :"<<x<<endl;
    cout<<"the value after swap of y will be :"<<y<<endl;


    return 0;
}