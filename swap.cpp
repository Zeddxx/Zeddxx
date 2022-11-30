#include <iostream>
using namespace std;

void swap(int x, int y);
//declaring function swap of arguement int x and int y..!


int main(){
    int a, b;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;

    cout<<"Value before swap of a :"<<a<<endl;    
    cout<<"Value before swap of b :"<<b<<endl; 

    swap(a,b);
     cout<<"Value after swap of a :"<<a<<endl;
     cout<<"Value after swap of b :"<<b<<endl;

    return 0;
}
void swap(int x,int y){
    int temp;
    temp=x; //asigning value into temp
    x=y; //put y into x
    y=temp; // now temp into y
    return;
}