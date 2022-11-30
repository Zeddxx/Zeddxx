#include <iostream>
using namespace std;

int main(){
    int n;
    int i;
    int sum=0;
    cout <<" enter the even number upto which u want to sum into : "<<endl;
    cin>>n;
    while(i<=n){
        cout<<sum<<endl;
        i=i+2;
        sum=sum+i;
    }
    return 0;
}