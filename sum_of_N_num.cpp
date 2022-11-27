//  

// <--! For for loop -->


// int main(){
//     int num;
//     int sum=0;
//     cout<<"enter the number:"<<endl;
//     cin>>num;
//     for(int i=1;i<=num;++i){
//         sum+=i;
//     }
//     cout<<"sum is : "<<sum;
//     return 0;
// }
//<--! For while loop -->


#include <iostream>
using namespace std;

int main(){
    int num;
    int i=1;
    int sum=0;
    cout<<"enter the number :"<<endl;
    cin>>num;
    while(i<=num){
        sum+=i;
        i++;
    }
    cout<<sum;
    return 0;
}

// <!-- Sum of n natural number by do-while loop-->

// #include <iostream>
// using namespace std;

// int main(){

//     // Here i is the starting point from where the number starts from..!
//     /* Here the sum is equal to zero*/

//     int num,i=1,sum=0;


//     /*Declaring variables without initialization lead to logical errors which are hard to debug sometimes. So to avoid this, we write it like this int sum = 0; We declared variable 'sum' and initializated it to 0 to avoid any error.*/


//     cout<<"Enter the number :"<<endl;
//     cin>>num;
//     do
//     {
//         sum+=i;      //sum=sum+i
//         i++;
//     }
//     while(i<=num);
//     cout<<"The sum of numbers 1 to "<<num<<" is :"<<endl<<sum;
//     return 0;
// }