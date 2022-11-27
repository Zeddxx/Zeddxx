#include <iostream>
using namespace std;

double fahr_to_cel(double fahr)
{
    double cel;
    cel = (fahr-32)*5/9;
    return cel;
}

int main(){
    double fahr;

    cout << " enter temprature in fahrenheit (in degree) "<<endl;
    cin >>fahr;
    cout << " the temprature in celsius will be : " <<endl <<fahr_to_cel(fahr) <<endl;

    return 0;
}