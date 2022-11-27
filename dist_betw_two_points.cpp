#include <iostream>
#include <cmath>
using namespace std;

/*Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure*/


struct point{    //structure declaration..!
    float x;    //member float variable..!
    float y;    //same..!
};

// Function declaring and defining at same time..!

// we use struct as..
// my_structure_name.member_variable..
float calculate_distance(struct point *p1, struct point *p2){
    float fx, fy;   // Taking two more variable of float data types..!
    fx=(*p1).x-(*p2).x;  // distance formula this means x1-x2
    fy=(*p1).y-(*p2).y;   // means y1-y2

    return sqrt((fx*fx)+(fy*fy)); //using math function square root..!!
}

int main(){
    struct point *p1, *p2, q,w; //declaring more value as a input..!
    p1=&q;      //giving address(call by reference)
    p2=&w;      //same...!

    cout<<"Enter the coordinate for p1x: "<<endl;
    cin>>(q).x;
    cout<<"Enter the coordinate for p1y: "<<endl;
    cin>>(q).y;
    cout<<"Enter the coordinate for p2x: "<<endl;
    cin>>(w).x;
    cout<<"Enter the coordinate for p2y: "<<endl;
    cin>>(w).y;

    // Defining the function here..!! 
    cout<<"The distance between two point is: "<<endl<<calculate_distance(p1,p2)<<endl;

    return 0;
}