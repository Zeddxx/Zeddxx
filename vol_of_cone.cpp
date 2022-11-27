#include <iostream>
#include <cmath>
using namespace std;

const double pi= 3.14; // value of pi will be constant during program
float find_vol_of_cone(float r , float h); // function to find volume

int main(){
 float r , h , volume;                      // declaring r , h , and x

 cout << "enter  the radius of cone : " <<endl;
 cin >> r;                                            // taking values from user
 cout << "enter  the height of cone : " <<endl;
 cin >> h;
  volume = find_vol_of_cone(r,h);                         // calling the function
 cout << "The volume of cone is : " << endl << volume ;

 return 0; 

}
float find_vol_of_cone(float r , float h)
{                                                       
    float vol_of_cone;              // declaring a new variable
    vol_of_cone= (pi*r*r*h)/3;      // formula to calculate volume of cone
    return(vol_of_cone);            // returning value to user
}
