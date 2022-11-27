#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double meter;
    double inch,feet;
    inch= 39.37*meter;
    feet= 3.281*meter;
    cout <<" enter the meter which you want to convert into inches and feet :" <<endl;
    cin >>meter;
    cout << " the value of "<<meter<<" meters in inch :"<<endl<<inch;
    cout << " ther value of "<<meter<< " meters in feet :"<<endl <<feet;
    return 0;
}