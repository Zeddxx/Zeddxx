#include <iostream>
using namespace std;

const double pi=3.14;
double find_vol_of_cylinder(double r, double h);

int main(){
    double r,h;
    double volume;
    cout << " Enter the radius of cylinder : " <<endl;
    cin >>r;
    cout <<" Enter the height of cylinder : " <<endl;
    cin >>h;
    if(r==0 || h==0)
    {
        cout << "enter valid values" <<endl;
    }

    else {
    volume = find_vol_of_cylinder(r,h);
    cout << " The volume of cylinder will be :" <<endl <<volume;
    }
    return 0;
}
double find_vol_of_cylinder(double r, double h){
    double vol_of_cylinder;
    vol_of_cylinder = pi*r*r*h;
    return(vol_of_cylinder);
}
